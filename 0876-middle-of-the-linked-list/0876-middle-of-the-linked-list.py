# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def middleNode(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        temp = head
        count = 0
        while temp:
            temp = temp.next
            count +=1 
        step = (count//2)+1
        for i in range(step-1):
            head = head.next
        return head
        
