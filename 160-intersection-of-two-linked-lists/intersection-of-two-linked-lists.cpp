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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currA=headA, *currB= headB;
        int countA=0, countB=0;
        while(currA){
            countA++;
            currA=currA->next;
        }
        while(currB){
            countB++;
            currB=currB->next;
        }
        int diff= abs(countA-countB);
        currA=headA;
        currB= headB;

        if(countA>countB){
            while(diff--){
            currA=currA->next;
            }

        }
        else if(countA<countB){
            while(diff--)
            currB=currB->next;
        }

        while(currA && currB){
            if(currA== currB)
            return currA;
            currA=currA->next;
            currB=currB->next;
        }
        return nullptr;
        
    }
};