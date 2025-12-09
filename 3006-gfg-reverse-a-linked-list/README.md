
# Reverse a linked list

**Platform:** GeeksForGeeks
**Difficulty:** Difficulty: EasyAccuracy: 73.11%Submissions: 374K+Points: 2Average Time: 30m
**Topics:** 

---

## Problem
<p><span style="font-size: 18.6667px;">You are given the <strong>head </strong>of a singly <strong>linked list</strong>. You have to <strong>reverse </strong>the linked list and return the <strong>head </strong>of the reversed list.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:<br>      <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/906653/Web/Other/blobid0_1754978270.webp" width="273" height="58"></strong>
<strong>Output: </strong>4 -&gt; 3 -&gt; 2 -&gt; 1<strong>
Explanation: </strong>After reversing the linkedList<strong><br>      <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/906653/Web/Other/blobid1_1754978326.webp" width="273" height="58"><br></strong></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: <br>      <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/906653/Web/Other/blobid2_1754978468.webp" width="325" height="60"></strong>
<strong>Output: </strong>8 -&gt; 9 -&gt; 10 -&gt; 7 -&gt; 2</span><br><span style="font-size: 14pt;"><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Explanation: </strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">After reversing the linked list</span><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"><br>      <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/906653/Web/Other/blobid3_1754978513.webp" width="353" height="65"><br></strong></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> <br>      <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/906653/Web/Other/blobid4_1754978588.webp" width="211" height="71"><br><strong>Output: </strong>8<strong>
Explanation:<br>       <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/906653/Web/Other/blobid5_1754978638.webp" width="202" height="68"></strong></span></pre>
<p><span style="font-size: 18.6667px;"><strong>Constraints: <br></strong>1 ≤ number of nodes ≤ 10<sup>5</sup><br>1 ≤ node-&gt;data ≤ 10<sup>5</sup></span></p>

---

## Solution
```cpp
/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node * prev = NULL;
        Node * curr = head;
        while(curr) {
            Node *next = NULL;
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr=next;
        }
        head = prev;
        return head;
    }
};
```
