# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution(object):
    def mergeTwoLists(self, l1, l2):
        l3 = ListNode()
        l3aux = l3
        while l1 and l2:
            if l1.val < l2.val:
                l3aux.next = l1
                l1 = l1.next
            else:
                l3aux.next = l2
                l2 = l2.next
            l3aux = l3aux.next
        if l2:
            l3aux.next = l2
        elif l1:
            l3aux.next = l1
        else:
            return l1
        return l3.next