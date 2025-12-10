
# Length of Linked List

## Platform
**GeeksForGeeks**

## Difficulty: Basic | Accuracy: 85.99% | Points: 1

## Topics
**Linked List, Data Structures**

---

## Problem
<h3>Find Length of Linked List | Practice | GeeksforGeeks</h3><p>See <a href="https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/0">Problem Link</a></p>

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
