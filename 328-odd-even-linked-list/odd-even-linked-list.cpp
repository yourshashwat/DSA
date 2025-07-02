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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL|| head->next==NULL)
        return head;
        ListNode *evenHead=NULL, *eventail=NULL, *curr=head, *temp;
        while(curr->next!=NULL){
            temp= curr->next;
            if(evenHead==NULL){
                evenHead=temp;
                eventail=temp;
            }
            else{
                eventail->next=temp;
                eventail= eventail->next;
            }
            if(temp->next==NULL){
                curr->next=NULL;
            }
            else{
            curr->next=temp->next;
            curr=curr->next;
            }

        }
        curr->next=evenHead;
        eventail->next=NULL;
        return head;
    }
};