
# Length of Linked List

**Platform:** GeeksForGeeks
**Difficulty:** 25 Interview Prep Tutorials My Profile Change Language  Back to Explore Page  Ask A Doubt My Doubts FREQUENTLY ASKED QUESTIONS Give me a hint Dry Run the Example with approach Debug my code Derive time and space complexity of my Code Identify the Boundary cases to consider Problem Editorial Submissions Comments Find Length of Linked List Difficulty: BasicAccuracy: 85.99%Submissions: 277K+Points: 1Average Time: 15m  Given head of a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.  Examples :  Input: head : 1->2->3->4->5  Output: 5 Explanation: Length of the linked list is 5, as there  are 5 nodes present in it.  Input: head : 2->4->6->7->5->1->0   Output: 7 Explanation: Length of the linked list is 7, as there  are 7 nodes present in it.  Constraints: 1 <= number of nodes <= 4*104 1 <= node->data <= 103  Try more examples Expected Complexities Topic Tags Related Articles Report An Issue If you are facing any issue on this page. Please let us know. Output Window Compilation Results Custom Input Y.O.G.I. (AI Bot) Problem Solved Successfully  Suggest Feedback  Test Cases Passed 1115 / 1115 Attempts : Correct / Total You can see all your attempts in submission tab Accuracy : 100% Points Scored  You can see the score in submission tab Time Taken 0.03 Calculating score…  Stay Ahead With:  Build 21 Projects in 21 Days Build real-world ML, Deep Learning & Gen AI projects Register Now C++ (17) Start Timer 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 /* class Node {   public:     int data;     Node *next;     Node(int x) {         data = x;         next = NULL;     } }; */ class Solution {   public:     int getCount(Node* head) {         // Code here          int count=0;         //Code here         Node * temp = head;         while(temp!=NULL){             count++;             temp=temp->next;         }         return count;     } }; Custom InputCompile & RunSubmit
**Topics:** Linked List, Data Structures

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
