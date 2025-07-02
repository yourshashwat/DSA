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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *start=head;
        if(head==NULL || (head->next==NULL && n==1)) return NULL;
        stack<ListNode*> st;
        while(start){
            st.push(start);
            start=start->next;
        }
        while(n--){
            st.pop();
        }
        // ListNode *temp=st.top(); st.pop();
        // if(temp==head && st.empty()) return head->next;
        // if(st.empty()) temp->next=NULL;
        // else{
        //      temp->next=temp->next->next;
        //       //delete temp;
        // }
        if(st.empty()) return head->next;
        else{
            ListNode *temp= st.top();
            temp->next=temp->next->next;
        }
        return head;

    }
};