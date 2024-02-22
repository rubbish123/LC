class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int la=0,lb=0;
        ListNode *ta=headA;
        ListNode *tb=headB;
        while(ta!=NULL){
            la++;
            ta=ta->next;
        }
        while(tb!=NULL){
            lb++;
            tb=tb->next;
        }
        while(la>lb){
            headA=headA->next;
            la--;
        }
        while(lb>la){
            headB=headB->next;
            lb--;
        }
        while(la>0){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
            la--;
        }
        return NULL;
    }
};