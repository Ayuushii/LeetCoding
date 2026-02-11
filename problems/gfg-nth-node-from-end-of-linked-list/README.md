# Kth from End of Linked List

## Platform
**GeeksForGeeks**

## Difficulty: Easy | Accuracy: 41.18% | Points: 2

## Topics
**Linked List, Data Structures**

## Problem
[Problem Link](https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/0)

<p class="ajy" tabindex="0" role="button" aria-haspopup="true" data-tooltip="Show details" aria-label="Show details"><span style="font-size: 14pt;">You are given the <strong>head</strong> of a linked list and the number <strong>k</strong>, You have to return the k<sup>th</sup> node from the end of linkedList. If k is more than the number of nodes, then the return <strong>-1.</strong></span></p>
<div dir="ltr">
<p><span style="font-size: 14pt;"><strong>Examples<br></strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>LinkedList:<strong> </strong>1-&gt;2-&gt;3-&gt;4-&gt;5-&gt;6-&gt;7-&gt;8-&gt;9, k = 2<br><strong>Output: </strong>8<strong>
Explanation: </strong>The given linked list is 1-&gt;2-&gt;3-&gt;4-&gt;5-&gt;6-&gt;7-&gt;8-&gt;9. The 2nd node from end is 8.<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700170/Web/Other/blobid0_1723031071.png" width="518" height="55"><br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>LinkedList:<strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"> </strong>10-&gt;5-&gt;100-&gt;5, k = 5<br><strong>Output: </strong>-1<strong>
Explanation: </strong>The given linked list is 10-&gt;5-&gt;100-&gt;5. Since 'k' is more than the number of nodes, the output is -1.<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700170/Web/Other/blobid1_1723031085.png" width="335" height="68"></span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ number of nodes ≤ 10<sup>6<br></sup>1 ≤ node-&gt;data , x ≤ 10<sup>6</sup><br>1 ≤ k ≤ 10<sup>6</sup></span></p>
</div>

---

## Solution
```cpp
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        if(head==NULL)
            return -1;
       // Your code here
        Node *first = head;
        Node *second = head;
        for(int i=0;i<k;i++){
            if(first==NULL)
                return -1;
            first=first->next;
        }
        while(first!=NULL){
            first=first->next;
            second=second->next;
        }
        return second->data;
    }
};
```