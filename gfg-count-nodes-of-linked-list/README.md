
# Length of Linked List

## Platform
**GeeksForGeeks**

## Difficulty: Basic

## Topics
**Linked List, Data Structures**

---

## Problem
<p><span style="font-size: 18px;">Given head of a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.</span></p>
<p><strong><span style="font-size: 18px;">Examples :</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input: </span></strong><span style="font-size: 18px;">head : 1-&gt;2-&gt;3-&gt;4-&gt;5<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700039/Web/Other/blobid0_1720505073.png" width="400" height="90"><br><strong>Output: </strong>5<strong>
Explanation:</strong> Length of the linked list is 5, as there <br>are 5 nodes present in it.</span>
</pre>
<pre><strong><span style="font-size: 18px;">Input: </span></strong><span style="font-size: 18px;">head : 2-&gt;4-&gt;6-&gt;7-&gt;5-&gt;1-&gt;0<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700039/Web/Other/blobid1_1720505089.png" width="400" height="90"> <br><strong>Output: </strong>7<strong>
Explanation: </strong></span><span style="font-size: 14pt;">Length of the linked list is 7, as there <br></span><span style="font-size: 18px;">are 7 nodes present in it.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= number of nodes &lt;= 4*10<sup>4</sup><br>1 &lt;= node-&gt;data &lt;= 10<sup>3</sup></span></p>

---

## Solution
```cpp
/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int getCount(Node* head) {
        // Code here
         int count=0;
        //Code here
        Node * temp = head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
};
```
