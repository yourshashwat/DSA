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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head, *curr1, *curr2;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if(list1->val<=list2->val){
             head=list1;
             curr1=list1->next;
             curr2=list2;
        }
        else {
            head= list2;
            curr2=list2->next;
            curr1=list1;
        }
        ListNode *curr=head;
        while(curr1 && curr2){
            if(curr1->val<=curr2->val){
                curr->next=curr1;
                curr1=curr1->next;
                curr=curr->next;
            }
            else{
                curr->next= curr2;
                curr2= curr2->next;
                curr=curr->next;
            }
        }
       if(curr1) curr->next=curr1;
        if(curr2) curr->next=curr2;
        return head;
    }
};