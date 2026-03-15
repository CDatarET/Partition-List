public class Solution {
    public ListNode Partition(ListNode head, int x) {
        ListNode less = null;
        ListNode ge = null;
        ListNode current = head;
        ListNode l1 = less;
        ListNode g1 = ge;
        while(current != null){
            if(current.val < x){
                if(less == null){
                    less = new ListNode(current.val, null);
                    l1 = less;
                }
                else{
                    l1.next = new ListNode(current.val, null);
                    l1 = l1.next;
                }
            }
            else{
                if(ge == null){
                    ge = new ListNode(current.val, null);
                    g1 = ge;
                }
                else{
                    g1.next = new ListNode(current.val, null);
                    g1 = g1.next;
                }
            }

            current = current.next;
        }

        if(less == null){
            return(ge);
        }
        else{
            l1.next = ge;
            return(less);
        }
    }
}
