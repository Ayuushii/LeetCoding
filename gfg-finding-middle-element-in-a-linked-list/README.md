# Middle of a Linked List

## Platform
**GeeksForGeeks**

## Difficulty: Easy | Accuracy: 57.93% | Points: 2

## Topics
**Linked List, Data Structures, Two Pointer Algorithm**

## Problem
[Problem Link](https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/0)

<p><span style="font-size: 14pt;">You are given the <strong>head </strong>of a linked list, You have to return the value of the <strong>middle node </strong>of the linked list. <br></span></p>
<ul>
<li><span style="font-size: 14pt;">If the number of nodes is odd, return the middle node value.</span></li>
<li><span style="font-size: 14pt;">If the number of nodes is even, there are two middle nodes, so return the second middle node value.</span></li>
</ul>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: <br>   <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/908246/Web/Other/blobid0_1756126203.webp" width="505" height="67"></strong>
<strong>Output: </strong>3<br><strong>Explanation:</strong> The given linked list is 1-&gt;2-&gt;3-&gt;4-&gt;5 and its middle is 3.<br>   <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/908246/Web/Other/blobid1_1756126356.webp" width="506" height="67"></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong><br>   <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/908246/Web/Other/blobid2_1756126428.webp" width="567" height="66"><br><strong>Output: </strong>7 <br><strong>Explanation:</strong> The given linked list is 2-&gt;4-&gt;6-&gt;7-&gt;5-&gt;1 so, there are two middle node 6 and 7, return the second middle node as 7.<br>   <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/908246/Web/Other/blobid4_1756126588.jpg" width="571" height="67"></span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ no. of nodes ≤ 10<sup>5</sup><br>1 ≤ node-&gt;data ≤ 10<sup>5</sup></span></p>

---

## Solution
```cpp
/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        // Your code here
        if(head == NULL)
            return -1;
        Node *fast=head;
        Node *slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow->data;
    }
};
```