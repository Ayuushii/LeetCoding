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