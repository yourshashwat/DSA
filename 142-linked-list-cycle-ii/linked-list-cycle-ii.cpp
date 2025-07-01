/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int> mp;
        if(head==NULL || head->next==NULL){
            return nullptr;
        }
        ListNode *curr=head;
        while(curr){
            if(mp.find(curr)==mp.end()){
                mp[curr]++;
            }
            else return curr;
            curr=curr->next;
        }
        return nullptr;
    }
};