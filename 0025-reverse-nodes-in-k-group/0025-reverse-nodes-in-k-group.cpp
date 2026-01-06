/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseK(ListNode *prev, ListNode *temp, int k) {
        ListNode *check = temp;
        int cnt = 0;
        while(check && cnt<k) {
            check=check->next;
            cnt++;
        }
        if(cnt<k) return temp;
        ListNode *start = temp;
        ListNode *front = temp;
        int count = k;
        while(count) {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
            count--;
        }
        start->next = reverseK(nullptr, temp, k);
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        return reverseK(NULL, head, k);
    }
};