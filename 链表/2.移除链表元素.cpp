class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr){
            return head;
        }
        ListNode *real_head=new ListNode(-1);
        real_head->next=head;
        ListNode *res=real_head;
        while(real_head->next!=nullptr){
            if(real_head->next->val==val){
                real_head->next=real_head->next->next;
            }
            else{
                real_head=real_head->next;
            }
        }
        return res->next;
    }
};