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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1) return head;
        ListNode *fast, *slow;
        fast=slow=head;
        int start=0;
        stack<int>st;
        while(fast){
            while(fast && start<k){
                st.push(fast->val);
                fast=fast->next;
                start++;
            }
            if(fast || start==k){
                while(slow!=fast){
                    slow->val=st.top(); st.pop();
                    slow=slow->next;
                }
            }
            start=0;
        }
        return head;
         
    }
};