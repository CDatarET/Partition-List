# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def partition(self, head, x):
        less = None
        ge = None
        current = head
        l1 = less
        g1 = ge
        while current:
            if current.val < x:
                if not less:
                    less = ListNode(current.val, None)
                    l1 = less
                else:
                    l1.next = ListNode(current.val, None)
                    l1 = l1.next
            else:
                if not ge:
                    ge = ListNode(current.val, None)
                    g1 = ge
                else:
                    g1.next = ListNode(current.val, None)
                    g1 = g1.next

            current = current.next

        if not less:
            return(ge)
        else:
            l1.next = ge
            return(less)
