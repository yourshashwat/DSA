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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head->next;
        if(fast==NULL) return head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast==NULL) return slow;
        else return slow->next;
    }
};