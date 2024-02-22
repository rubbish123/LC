/*
    快慢指针可以判断链表是否有环
    在确定链表有环的情况下,从链表头和快慢指针相遇的地方各自发出一个指针,相同速度遍历链表
    当这两个指针相遇的时候,就是链表入环的节点
*/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                ListNode *p1=head;
                ListNode *p2=fast;
                while(p1!=p2){
                    p1=p1->next;
                    p2=p2->next;
                }
                return p2;
            }
        }
        return NULL;
    }
};