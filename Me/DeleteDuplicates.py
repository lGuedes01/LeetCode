# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head == None:
            return
        h2 = head
        while(h2.next != None):
            prox = h2.next
            if prox != None:
                if prox.val == h2.val:
                    h2.next = prox.next
                else:
                    h2 = prox
        return head