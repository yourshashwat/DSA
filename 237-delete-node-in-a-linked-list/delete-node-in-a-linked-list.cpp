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
    void deleteNode(ListNode* node) {
        ListNode *curr= node;
        ListNode *currNext= node->next;
        while(currNext){
            curr->val= currNext->val;
            if(currNext->next){
                curr=currNext;
            currNext=currNext->next;
            }
            else break;
            
        }
        curr->next=NULL;
    }
};