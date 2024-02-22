class Solution {
// 快慢指针一趟扫描

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *rhead=new ListNode();
        rhead->val=-1;
        rhead->next=head;
        ListNode *fast=rhead;
        ListNode *slow=rhead;
        while(n>0){
            fast=fast->next;
            n--;
        }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return rhead->next;
    }
};