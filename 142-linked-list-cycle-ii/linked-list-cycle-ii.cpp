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
      
        if(head==NULL || head->next==NULL){
            return nullptr;
        }
        ListNode *slow,*fast,*p;
        slow=fast=p=head;
        bool found=false;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                found=true;
                break;
            }
            
        }
        if(found){
            while(slow){
                if(slow==p) return slow;
                slow=slow->next;
                p=p->next;
            }
        }
        
        return nullptr;
      
    }
};