// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};

*/
vector<int> displayList(Node *head) {
    Node *temp = head;
    vector<int> ans;
    while(temp){
        ans.push_back(temp->data);
        temp=temp->next;
    }
    return ans;
}