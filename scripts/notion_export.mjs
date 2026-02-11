import fs from "fs";
import path from "path";
import { Client } from "@notionhq/client";
import { NotionToMarkdown } from "notion-to-md";

const notion = new Client({ auth: process.env.NOTION_TOKEN });
const n2m = new NotionToMarkdown({ notionClient: notion });

const parentPageId = process.env.NOTION_PAGE_ID;
if (!parentPageId) throw new Error("Missing NOTION_PAGE_ID");

const outDir = path.join(process.cwd(), "00_patterns");
fs.mkdirSync(outDir, { recursive: true });

async function getChildPages(blockId) {
  const response = await notion.blocks.children.list({
    block_id: blockId,
    page_size: 100,
  });

  return response.results.filter(
    (block) => block.type === "child_page"
  );
}

function slugify(text) {
  return text
    .toLowerCase()
    .replace(/\s+/g, "-")
    .replace(/[^\w\-]/g, "");
}

async function exportPage(pageId, title) {
  const mdBlocks = await n2m.pageToMarkdown(pageId);
  const mdString = n2m.toMarkdownString(mdBlocks).parent;

  const slug = slugify(title);
  const filePath = path.join(outDir, `${slug}.md`);

  fs.writeFileSync(filePath, `# ${title}\n\n${mdString}`);
  return { title, slug };
}

async function main() {
  const childPages = await getChildPages(parentPageId);

  let indexContent = `# DSA Pattern Index\n\n`;

  for (const page of childPages) {
    const title = page.child_page.title;
    const pageId = page.id;

    console.log("Exporting:", title);
    const { slug } = await exportPage(pageId, title);

    indexContent += `- [${title}](./${slug}.md)\n`;
  }

  fs.writeFileSync(path.join(outDir, "README.md"), indexContent);

  console.log("Export complete.");
}

main();
