class Solution {
    public ListNode swapPairs(ListNode head) {
        ListNode realHead=new ListNode(0);
        realHead.next=head;
        ListNode pre=realHead;
        while(head!=null&&head.next!=null){
            ListNode first=head;
            ListNode second=head.next;
            pre.next=second;
            first.next=second.next;
            second.next=first;
            pre=first;
            head=head.next;
        }
        return realHead.next;
    }
}