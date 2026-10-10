# 0/1 Knapsack


### Questions

<details>
<summary>Identification of this Pattern</summary>
- Pattern covers problems where you include/exclude an item to find an optimal solution (min/max)
- Unbounded knapsack - supply of items is unlimited
- Fractional Knapsack is Greedy - _**Link to that**_

</details>

<details>
<summary>[0/1 Knapsack Problem](https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1) - Given list of items with their values and weights and a bag with weight W, choose items to fill in the bag such that profit is maximised.</summary>
- We need **BASE CONDITION + CHOICE DIAGRAM**

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YFFDM3T4%2F20261010%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261010T141425Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIF1zsJCDiasYvlR7oWdiVYX1EJnyoWdgvII1KfZaR7P4AiEAuJOvYje3M6sc4gESsWIi1LI1bLvpoN0iD6dXuXZDELMq%2FwMIVxAAGgw2Mzc0MjMxODM4MDUiDKIUmRoLZecyzcXRjCrcAxaWtogEba1GoKpM2T%2F5ZV6BDf9HQpTRlZzZB80p6FzHouCV0rFyHSRD0SAYFRgpyohXfdeasMNz%2FKo9n1a5xf7882Q6UySfmJu0tFkAJBIIAg4OUsbExNEGgpCnsL7qIXJpvSdumT9cOuY8%2FnGV4XvLqc2IPMgsPP%2Fm018q9RImhmN7YUWCzSo%2F9I%2Bf0c0QwTcfGMmEhIOGI%2BA60vjOA0hNaDC4hlMFjkyGTK2YuVuBnlST8cSJIt1h2MMzLdeTUo2WaNkgm%2BG%2FM%2Fk27G%2Bhd9lG2yBEurcD7CQeH8TVH%2FBD9xuoKyL51NNN3GOa%2F%2FVOrrjJc6BqXNZxDsV%2FvUp5mmt3msys5W%2BofnQvd6fJDGCRmA%2FNgd2IHNIjTO2mSy%2BT%2FHmP5LLhqqqswO7FDSkQgGrMvNfzzvNq%2BVklgK5luO54%2FNI7MmsLQitsUkeZF68cXvTP1rMLFlTFSLlrm1ib61%2BZZqSoCN6TwZICt52jFndv1jqmFSH%2F%2FwadmNq4D%2FHKowi%2FFP%2F7uZ%2Fy2nP3%2BSKWt0f9h09%2BzrbGQL8Ctoc2LxoxEoIprpcS9tgaKgTmCcEyTiM8LyXfuTBDolaKa4d5UlyeCCNtQXC2kfSrm1e0%2BZb58UR2rNHpfcExYDSrMMmDqdYGOqUBtt8W%2BFOIaYufphHa9aIS59OGvAGy8jgy0kPUUpBXMEnnWhlSsM%2BdDjgEkNdjF%2BOq%2FhSahIafblejmGBca8BSJZq%2FZ2f2nHJGGJC65Ja31mjKzSzoB73B3Tu2QPEyY7AgH%2FN8UWtjaDw2%2BX9wJVM40yIyDVKLh1lDZ2kwizIlkg55pmpd42R5pX1Cp%2FyWBi7sJpnP4zu7qbrfwP1yS1WS%2FWVsvluE&X-Amz-Signature=28894a953f0103a10834529df2acc0aab764382f1b9394cac019a1e64e0b542f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YFFDM3T4%2F20261010%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261010T141425Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIF1zsJCDiasYvlR7oWdiVYX1EJnyoWdgvII1KfZaR7P4AiEAuJOvYje3M6sc4gESsWIi1LI1bLvpoN0iD6dXuXZDELMq%2FwMIVxAAGgw2Mzc0MjMxODM4MDUiDKIUmRoLZecyzcXRjCrcAxaWtogEba1GoKpM2T%2F5ZV6BDf9HQpTRlZzZB80p6FzHouCV0rFyHSRD0SAYFRgpyohXfdeasMNz%2FKo9n1a5xf7882Q6UySfmJu0tFkAJBIIAg4OUsbExNEGgpCnsL7qIXJpvSdumT9cOuY8%2FnGV4XvLqc2IPMgsPP%2Fm018q9RImhmN7YUWCzSo%2F9I%2Bf0c0QwTcfGMmEhIOGI%2BA60vjOA0hNaDC4hlMFjkyGTK2YuVuBnlST8cSJIt1h2MMzLdeTUo2WaNkgm%2BG%2FM%2Fk27G%2Bhd9lG2yBEurcD7CQeH8TVH%2FBD9xuoKyL51NNN3GOa%2F%2FVOrrjJc6BqXNZxDsV%2FvUp5mmt3msys5W%2BofnQvd6fJDGCRmA%2FNgd2IHNIjTO2mSy%2BT%2FHmP5LLhqqqswO7FDSkQgGrMvNfzzvNq%2BVklgK5luO54%2FNI7MmsLQitsUkeZF68cXvTP1rMLFlTFSLlrm1ib61%2BZZqSoCN6TwZICt52jFndv1jqmFSH%2F%2FwadmNq4D%2FHKowi%2FFP%2F7uZ%2Fy2nP3%2BSKWt0f9h09%2BzrbGQL8Ctoc2LxoxEoIprpcS9tgaKgTmCcEyTiM8LyXfuTBDolaKa4d5UlyeCCNtQXC2kfSrm1e0%2BZb58UR2rNHpfcExYDSrMMmDqdYGOqUBtt8W%2BFOIaYufphHa9aIS59OGvAGy8jgy0kPUUpBXMEnnWhlSsM%2BdDjgEkNdjF%2BOq%2FhSahIafblejmGBca8BSJZq%2FZ2f2nHJGGJC65Ja31mjKzSzoB73B3Tu2QPEyY7AgH%2FN8UWtjaDw2%2BX9wJVM40yIyDVKLh1lDZ2kwizIlkg55pmpd42R5pX1Cp%2FyWBi7sJpnP4zu7qbrfwP1yS1WS%2FWVsvluE&X-Amz-Signature=bc6f94e05489e4a079189cc0898f6d3ac1c359755c23b1cbc0392845e9528ae0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YFFDM3T4%2F20261010%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261010T141425Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIF1zsJCDiasYvlR7oWdiVYX1EJnyoWdgvII1KfZaR7P4AiEAuJOvYje3M6sc4gESsWIi1LI1bLvpoN0iD6dXuXZDELMq%2FwMIVxAAGgw2Mzc0MjMxODM4MDUiDKIUmRoLZecyzcXRjCrcAxaWtogEba1GoKpM2T%2F5ZV6BDf9HQpTRlZzZB80p6FzHouCV0rFyHSRD0SAYFRgpyohXfdeasMNz%2FKo9n1a5xf7882Q6UySfmJu0tFkAJBIIAg4OUsbExNEGgpCnsL7qIXJpvSdumT9cOuY8%2FnGV4XvLqc2IPMgsPP%2Fm018q9RImhmN7YUWCzSo%2F9I%2Bf0c0QwTcfGMmEhIOGI%2BA60vjOA0hNaDC4hlMFjkyGTK2YuVuBnlST8cSJIt1h2MMzLdeTUo2WaNkgm%2BG%2FM%2Fk27G%2Bhd9lG2yBEurcD7CQeH8TVH%2FBD9xuoKyL51NNN3GOa%2F%2FVOrrjJc6BqXNZxDsV%2FvUp5mmt3msys5W%2BofnQvd6fJDGCRmA%2FNgd2IHNIjTO2mSy%2BT%2FHmP5LLhqqqswO7FDSkQgGrMvNfzzvNq%2BVklgK5luO54%2FNI7MmsLQitsUkeZF68cXvTP1rMLFlTFSLlrm1ib61%2BZZqSoCN6TwZICt52jFndv1jqmFSH%2F%2FwadmNq4D%2FHKowi%2FFP%2F7uZ%2Fy2nP3%2BSKWt0f9h09%2BzrbGQL8Ctoc2LxoxEoIprpcS9tgaKgTmCcEyTiM8LyXfuTBDolaKa4d5UlyeCCNtQXC2kfSrm1e0%2BZb58UR2rNHpfcExYDSrMMmDqdYGOqUBtt8W%2BFOIaYufphHa9aIS59OGvAGy8jgy0kPUUpBXMEnnWhlSsM%2BdDjgEkNdjF%2BOq%2FhSahIafblejmGBca8BSJZq%2FZ2f2nHJGGJC65Ja31mjKzSzoB73B3Tu2QPEyY7AgH%2FN8UWtjaDw2%2BX9wJVM40yIyDVKLh1lDZ2kwizIlkg55pmpd42R5pX1Cp%2FyWBi7sJpnP4zu7qbrfwP1yS1WS%2FWVsvluE&X-Amz-Signature=0b2111e65b9eb3bf853d3195b0ee0bc040f04573673314e364504afbbf69296b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466433LTHRO%2F20261010%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261010T141425Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCmzm3aFuhDbotduFhJsubwS8hEjQJTcOD28YA988s9LQIhAI%2B0MQ1WKmYxKmH2NJb0jkE%2FiwZ6JxNasMTwiqR6AZipKv8DCFcQABoMNjM3NDIzMTgzODA1Igz5nUDd8O1fzGcjRwQq3AMAnolPQNkH7KBgrbTaLV%2BBR%2BU3sGLRuSXWn%2FoJf7oZ%2BX4MfUswtjooOJdXa4020h7arwDfloTSdQfKncHFxpEK4%2BBTl64Ewtrgb8KZLm0J3%2F48mwg%2By79kuxC2XNC8NlOgh8sxEXOgNN5uT9vaoYJjZLEf80lAyV1NSBF0uXcg9%2BWS%2BqvB37w0RYu03W37A8%2FAjpEtauA1yNd3QZUeLFyzDYsg0Q8rwWq1lvMqH%2BZ%2B43YFiLqdUN58O%2FdHR6F5vv1n9Mbk5O4ERB4V4p5UVDJMc%2FsafusQW9s8rv%2BMzctlyMU%2FFv1bwR6PvPdAzvxSiFyINYOOWvqtbBnVQoamM4PfRdFDcaqb1mQ66tuqwrmQQWISLXEv8Y2qbIvFevYlJIGncGUG78P8vrBl%2BfoQE75dlWBbn42B9qlJR%2Fq%2Fo%2F3Gayh6wjjBF6dPve7TATv2WAd3rlC2OqMpcFKCnGjUcCxCSv3huEqu8%2Fb%2Fp3bWurs3hfPrhX2aU%2BqwQY5iHMJAW6LRuL0zp1t1l9lZhDETksec9ohZDaQyZHbchvHHEINMX8HFpT6QLuW87MX5tVaSyWw69SIIazqrmJ%2BHpMGSTTknsa269rx8vcLcfSfUglt4dnGmtfe9fjiwmMs8QjCJg6nWBjqkASRv2wC88xnWliwcXxND8CpSaxamxW2hWtdvWBche666Zpth%2FutyfxeIRhiKN3ZFqGF5il%2BvjfBdtoeTfYnPeX2iExZ9GRCsaL%2FqWkfll2%2Fn0uKj%2B4Io%2FYvXB8lbYOy87p2Vaba2faiwJbrswP8Fa0h5wN26iu7dNsxSBZXBa0U2WUyOxNSLn1qLmt5tQmkvNTQn0cJaln5C8jKFKCPTp8vki6T4&X-Amz-Signature=0ab56841b5a21c3e5064ead70d4f67845db09e05387a55f9b1e533867ea960da&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466433LTHRO%2F20261010%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261010T141425Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCmzm3aFuhDbotduFhJsubwS8hEjQJTcOD28YA988s9LQIhAI%2B0MQ1WKmYxKmH2NJb0jkE%2FiwZ6JxNasMTwiqR6AZipKv8DCFcQABoMNjM3NDIzMTgzODA1Igz5nUDd8O1fzGcjRwQq3AMAnolPQNkH7KBgrbTaLV%2BBR%2BU3sGLRuSXWn%2FoJf7oZ%2BX4MfUswtjooOJdXa4020h7arwDfloTSdQfKncHFxpEK4%2BBTl64Ewtrgb8KZLm0J3%2F48mwg%2By79kuxC2XNC8NlOgh8sxEXOgNN5uT9vaoYJjZLEf80lAyV1NSBF0uXcg9%2BWS%2BqvB37w0RYu03W37A8%2FAjpEtauA1yNd3QZUeLFyzDYsg0Q8rwWq1lvMqH%2BZ%2B43YFiLqdUN58O%2FdHR6F5vv1n9Mbk5O4ERB4V4p5UVDJMc%2FsafusQW9s8rv%2BMzctlyMU%2FFv1bwR6PvPdAzvxSiFyINYOOWvqtbBnVQoamM4PfRdFDcaqb1mQ66tuqwrmQQWISLXEv8Y2qbIvFevYlJIGncGUG78P8vrBl%2BfoQE75dlWBbn42B9qlJR%2Fq%2Fo%2F3Gayh6wjjBF6dPve7TATv2WAd3rlC2OqMpcFKCnGjUcCxCSv3huEqu8%2Fb%2Fp3bWurs3hfPrhX2aU%2BqwQY5iHMJAW6LRuL0zp1t1l9lZhDETksec9ohZDaQyZHbchvHHEINMX8HFpT6QLuW87MX5tVaSyWw69SIIazqrmJ%2BHpMGSTTknsa269rx8vcLcfSfUglt4dnGmtfe9fjiwmMs8QjCJg6nWBjqkASRv2wC88xnWliwcXxND8CpSaxamxW2hWtdvWBche666Zpth%2FutyfxeIRhiKN3ZFqGF5il%2BvjfBdtoeTfYnPeX2iExZ9GRCsaL%2FqWkfll2%2Fn0uKj%2B4Io%2FYvXB8lbYOy87p2Vaba2faiwJbrswP8Fa0h5wN26iu7dNsxSBZXBa0U2WUyOxNSLn1qLmt5tQmkvNTQn0cJaln5C8jKFKCPTp8vki6T4&X-Amz-Signature=6daf1729bc8e0c0a51b19eb864dd08e9ad54d432ff0d6b2ddfa097dbeb35d9a2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466433LTHRO%2F20261010%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261010T141425Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCmzm3aFuhDbotduFhJsubwS8hEjQJTcOD28YA988s9LQIhAI%2B0MQ1WKmYxKmH2NJb0jkE%2FiwZ6JxNasMTwiqR6AZipKv8DCFcQABoMNjM3NDIzMTgzODA1Igz5nUDd8O1fzGcjRwQq3AMAnolPQNkH7KBgrbTaLV%2BBR%2BU3sGLRuSXWn%2FoJf7oZ%2BX4MfUswtjooOJdXa4020h7arwDfloTSdQfKncHFxpEK4%2BBTl64Ewtrgb8KZLm0J3%2F48mwg%2By79kuxC2XNC8NlOgh8sxEXOgNN5uT9vaoYJjZLEf80lAyV1NSBF0uXcg9%2BWS%2BqvB37w0RYu03W37A8%2FAjpEtauA1yNd3QZUeLFyzDYsg0Q8rwWq1lvMqH%2BZ%2B43YFiLqdUN58O%2FdHR6F5vv1n9Mbk5O4ERB4V4p5UVDJMc%2FsafusQW9s8rv%2BMzctlyMU%2FFv1bwR6PvPdAzvxSiFyINYOOWvqtbBnVQoamM4PfRdFDcaqb1mQ66tuqwrmQQWISLXEv8Y2qbIvFevYlJIGncGUG78P8vrBl%2BfoQE75dlWBbn42B9qlJR%2Fq%2Fo%2F3Gayh6wjjBF6dPve7TATv2WAd3rlC2OqMpcFKCnGjUcCxCSv3huEqu8%2Fb%2Fp3bWurs3hfPrhX2aU%2BqwQY5iHMJAW6LRuL0zp1t1l9lZhDETksec9ohZDaQyZHbchvHHEINMX8HFpT6QLuW87MX5tVaSyWw69SIIazqrmJ%2BHpMGSTTknsa269rx8vcLcfSfUglt4dnGmtfe9fjiwmMs8QjCJg6nWBjqkASRv2wC88xnWliwcXxND8CpSaxamxW2hWtdvWBche666Zpth%2FutyfxeIRhiKN3ZFqGF5il%2BvjfBdtoeTfYnPeX2iExZ9GRCsaL%2FqWkfll2%2Fn0uKj%2B4Io%2FYvXB8lbYOy87p2Vaba2faiwJbrswP8Fa0h5wN26iu7dNsxSBZXBa0U2WUyOxNSLn1qLmt5tQmkvNTQn0cJaln5C8jKFKCPTp8vki6T4&X-Amz-Signature=b7bf07e37715151862e06161e4599fc739dc2cd6bae63553eb53375f77fc9e0a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466433LTHRO%2F20261010%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261010T141425Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCmzm3aFuhDbotduFhJsubwS8hEjQJTcOD28YA988s9LQIhAI%2B0MQ1WKmYxKmH2NJb0jkE%2FiwZ6JxNasMTwiqR6AZipKv8DCFcQABoMNjM3NDIzMTgzODA1Igz5nUDd8O1fzGcjRwQq3AMAnolPQNkH7KBgrbTaLV%2BBR%2BU3sGLRuSXWn%2FoJf7oZ%2BX4MfUswtjooOJdXa4020h7arwDfloTSdQfKncHFxpEK4%2BBTl64Ewtrgb8KZLm0J3%2F48mwg%2By79kuxC2XNC8NlOgh8sxEXOgNN5uT9vaoYJjZLEf80lAyV1NSBF0uXcg9%2BWS%2BqvB37w0RYu03W37A8%2FAjpEtauA1yNd3QZUeLFyzDYsg0Q8rwWq1lvMqH%2BZ%2B43YFiLqdUN58O%2FdHR6F5vv1n9Mbk5O4ERB4V4p5UVDJMc%2FsafusQW9s8rv%2BMzctlyMU%2FFv1bwR6PvPdAzvxSiFyINYOOWvqtbBnVQoamM4PfRdFDcaqb1mQ66tuqwrmQQWISLXEv8Y2qbIvFevYlJIGncGUG78P8vrBl%2BfoQE75dlWBbn42B9qlJR%2Fq%2Fo%2F3Gayh6wjjBF6dPve7TATv2WAd3rlC2OqMpcFKCnGjUcCxCSv3huEqu8%2Fb%2Fp3bWurs3hfPrhX2aU%2BqwQY5iHMJAW6LRuL0zp1t1l9lZhDETksec9ohZDaQyZHbchvHHEINMX8HFpT6QLuW87MX5tVaSyWw69SIIazqrmJ%2BHpMGSTTknsa269rx8vcLcfSfUglt4dnGmtfe9fjiwmMs8QjCJg6nWBjqkASRv2wC88xnWliwcXxND8CpSaxamxW2hWtdvWBche666Zpth%2FutyfxeIRhiKN3ZFqGF5il%2BvjfBdtoeTfYnPeX2iExZ9GRCsaL%2FqWkfll2%2Fn0uKj%2B4Io%2FYvXB8lbYOy87p2Vaba2faiwJbrswP8Fa0h5wN26iu7dNsxSBZXBa0U2WUyOxNSLn1qLmt5tQmkvNTQn0cJaln5C8jKFKCPTp8vki6T4&X-Amz-Signature=b6188634b8b581f6edbfe1ce25b65b530b58dd6b5468ea6c8facff83a4345172&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664IYKRYV2%2F20261010%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261010T141426Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHZ0mX6wROpFqZZQbHc3CTqa4%2BdXHFr11r3Pr3hDtrBgAiEAjun8rATXUC2quezATyUyyXjyjyl2a7NIhY1WOJCHIvcq%2FwMIVxAAGgw2Mzc0MjMxODM4MDUiDDLVDT2QcpoduqUKFSrcA%2FSoN5UUZm7ALxkMLPTMJr6iurxSdOaYsM70eG8813BwAnebg0E%2Fj9swbWbh5dGw1sfTXBeKPvwWkGBiQ2YeSSv2Y75W8tD9pbhJ9WC5aMLNzPZRAMwb%2BVKYGLsmEa%2BTBK3H0JSR4BO%2FBhboiYIq5zfusRuYL2eTRQdT7myjLyukAL%2Fv6hIwwBQAk6iZ2HPkKkeMxm%2FH0LwUCqhnWAisGJIif3vK7wYtadCOzlkn4wV5R%2BrozzyOyFCf5DGMEOBuIKuGSE3ieedBp%2FsduJyBVN98AdBSoh3ubIBecvL7f8P2KpI6FPrZqVaVhRnjir0GwPG%2Fa4dQXmVrJbyjdNN3xzPNb2JaQ6teGVUvZvzrmEPtOLSoAGUj4HB44rgaw9vYCf4suL%2F%2Btq1IUR1bO9ivp4gGsDsDpYtE%2BYQ3HU4%2BiHevj60ntlbB%2BeKhEw%2FP5b9ZLmvSzmKKBW3bVj13iOWvWIUJMjkGL%2Fm%2BQQ9fvlVn91%2Fi55r8KvRKE6SUYvM4wbRWSBdjp9x6npv%2B%2FXqPg1plDSlgi8pWg8dUkjx%2F1Ijo0G4MUi5DiPmqBIs92cPdd4fS0qE9IrPPkhihA87jLCRg5FLIAtG6Uawh0pjMF486xvPB3TWtc0MxLSex0rLvMMyDqdYGOqUBil4UbcUbnq7i19xpnjqe5qkzvwWDiLaZ%2BXR4DGylHaZM8cKcKJCTKjuHsK7a5%2BOeirdDB6OEFnGWXQfpHCYbONcF%2BzeA67Aeu7OwnhlzZutOqBABAHLq46QliFNRX2hXqR8uKa3UxJuke%2FAlZLAVei33B4SjVBK6Scka4M1EQ%2BuhNcruTXSV2CYQyxwU3c%2BQVyRn7mORqEE3dKbZRJDK0Xsn3DbZ&X-Amz-Signature=4e18337b3681916bc12d186fd49b8d499d83b45a9a0fc334aa421a96082af8cb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666IALKW2A%2F20261010%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261010T141426Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAzieGSxq3lALknLCIaI%2FfzlXFXSs4ykYhw7XzHJl%2BynAiB5rHI06k3ZMjv%2BIiyguC%2FLueHVtgjoQ3ePEcaOTZ5K%2BSr%2FAwhXEAAaDDYzNzQyMzE4MzgwNSIMsxUyhtLjKMHevITIKtwDXYMzH22V1tzslYGkSYJhoxO96Zk1WGQCdHN1JbMV66SfU1pNePJObmlFCUXhOsamlu0BTmCfAuIzdfGNaPMRT656wBerZakzZx9loZn6tihw3O54uEe3Dj8WnM1e4kyKY5gAWhEMfXeXM1TLJUmTa0bgXZLtaOeDsd%2BXOX5epQWIRASTVZjqig%2BY5kydCU4vjRb6J164vmTMe0kZdFPULHhltfnJih6v34eto4xm%2FNwPJTdGnvU3q%2B2RZrhcJb8CPRXBHqR%2FBDHgkWzbXaGNHgcjl7gTl24a%2B088TvfzTbo3DtWySQGmAxzixAqtZSFFGfs66Kf5n1ptB3XHG4WYGVo2Fh7fLAwe2evJxtJLttKvaI7L4mrojUXY8328U4Men1vzKNvU4W9bpfkekIowRe71Toni9XXs1VXHIBCCYpXxUmEUWAXpxG27NsXZ%2BANYWyZkSslPxi4qZUySRzLpEJIT%2B1%2BSwvjwcmxb09S2wPZNj1mNJ5i%2BOklpJOGchI6ZlPid2d%2FcWORKADHGU0xKeIENp12IJrBknMcmz95RMu2AqWAZ7CMJJmr3WVFJH14DaMay%2Ff63u9SWoCf93NlErv9Jy9bjWUjWv8LxuIXLST6uoxmuOXbbG3HKGtEw4YSp1gY6pgFSMSELA0p11fb0YQNa%2Ffq1mgg4bS52hdzbLWe9OjQGhE9Z8Og%2BAkUbdLgwPIbViQLtpVfB%2FeQ%2F5vS7nz2IRLpy1QeWWldAyS1YTJ05aDAh9efrQbzgoHp7sqWqlk0KZyJbk7SToYkYejEWaTlf8O03%2FNWqoHlxlWqrhSJKxaJs4jwnxcUM1nczVhKoCdhih3OCwYEQXhXmA0A9G0%2F3LHxwl7M2Zp%2B7&X-Amz-Signature=5c8ad9e2f059914335e0dc2e5a3d2d3bb782bcc663cf5983aed354545a644e6e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666IALKW2A%2F20261010%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261010T141426Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAzieGSxq3lALknLCIaI%2FfzlXFXSs4ykYhw7XzHJl%2BynAiB5rHI06k3ZMjv%2BIiyguC%2FLueHVtgjoQ3ePEcaOTZ5K%2BSr%2FAwhXEAAaDDYzNzQyMzE4MzgwNSIMsxUyhtLjKMHevITIKtwDXYMzH22V1tzslYGkSYJhoxO96Zk1WGQCdHN1JbMV66SfU1pNePJObmlFCUXhOsamlu0BTmCfAuIzdfGNaPMRT656wBerZakzZx9loZn6tihw3O54uEe3Dj8WnM1e4kyKY5gAWhEMfXeXM1TLJUmTa0bgXZLtaOeDsd%2BXOX5epQWIRASTVZjqig%2BY5kydCU4vjRb6J164vmTMe0kZdFPULHhltfnJih6v34eto4xm%2FNwPJTdGnvU3q%2B2RZrhcJb8CPRXBHqR%2FBDHgkWzbXaGNHgcjl7gTl24a%2B088TvfzTbo3DtWySQGmAxzixAqtZSFFGfs66Kf5n1ptB3XHG4WYGVo2Fh7fLAwe2evJxtJLttKvaI7L4mrojUXY8328U4Men1vzKNvU4W9bpfkekIowRe71Toni9XXs1VXHIBCCYpXxUmEUWAXpxG27NsXZ%2BANYWyZkSslPxi4qZUySRzLpEJIT%2B1%2BSwvjwcmxb09S2wPZNj1mNJ5i%2BOklpJOGchI6ZlPid2d%2FcWORKADHGU0xKeIENp12IJrBknMcmz95RMu2AqWAZ7CMJJmr3WVFJH14DaMay%2Ff63u9SWoCf93NlErv9Jy9bjWUjWv8LxuIXLST6uoxmuOXbbG3HKGtEw4YSp1gY6pgFSMSELA0p11fb0YQNa%2Ffq1mgg4bS52hdzbLWe9OjQGhE9Z8Og%2BAkUbdLgwPIbViQLtpVfB%2FeQ%2F5vS7nz2IRLpy1QeWWldAyS1YTJ05aDAh9efrQbzgoHp7sqWqlk0KZyJbk7SToYkYejEWaTlf8O03%2FNWqoHlxlWqrhSJKxaJs4jwnxcUM1nczVhKoCdhih3OCwYEQXhXmA0A9G0%2F3LHxwl7M2Zp%2B7&X-Amz-Signature=7e5dac70e299bcd0f637bdc07f7547a55aab0a4c65537a745db06b42a4a0ce92&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Equal Sum Partition](https://leetcode.com/problems/partition-equal-subset-sum/description/) - Given an array, return true if it can be divided into two subsets with equal sum?</summary>
- For equal sum equation becomes 2s = S where S is the target sum. s = S/2. If there is a subset equal to S/2 then the array can be divided into two subsets of equal sum. Same as Subset Sum Problem.

</details>

<details>
<summary>[Perfect Sum Problem](https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1) - Given an array, return the number of subsets with sum equal to target S</summary>
- When we needed to max profit we did max (include, exclude)
- When we needed to find if a subset exists, we did OR (include, exclude)
- To find the count we would do SUM(include, exclude) results and we return 1 whenever we find a subset so that all the 1s count.

</details>

<details>
<summary>[Minimum Subset Sum Difference](https://www.geeksforgeeks.org/problems/minimum-sum-partition3317/1) - Given an array, return the minimum possible difference between two subset sums</summary>
- We need to minimise abs(s1-s2) where s1 & s2 are two valid subset sums. s1+s2 = total sum of array
- Min abs(s1-s2) can be 0. Start from there.

</details>

<details>
<summary>WHAT TO DO WHEN WE HAVE 0s in the subset? How does the Base Condition change then?</summary>

With 0s or duplicates, specially when counting subsets, we need to account for all possible options. Example for a sum 0 the possible subsets can be not only a { } but also {0}, {0,0} 
Meaning we cannot just return from a branch when we see sum==0, go down till n==0 also and return 1 for that. 


```c++
if(n==0) return sum==0?1:0;
```


</details>

<details>
<summary>[Partitions with Given Difference](https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1) - Given array, partition it into s1, s2 such that diff between them is d. Count number of such subsets.</summary>

s1+s2 = S (total Sum)
s1-s2 = d
2s1 = S + d         therefore we need count of s1s which equals (S+d)/2


</details>


### Resources

- [https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go](https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go)

### Notes (use sparingly!)

- Start with Recursive solution which is Base Condition + Choice Diagram (include/exclude)
- For Top-Down start with initialising matrix with base condition
- Convert the recursive hypothesis into a formula to fill up the remaining matrix
