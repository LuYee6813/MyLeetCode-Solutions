# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# Step 1:
# (4) -> (5) -> (1) -> (9) -> None

# Step 2:
#         |-------------V
# (4) -> (1) -> (1) -> (9) -> None

#         |-------------V
# (4) -> (1)           (9) -> None

#
# (4) -> (1) -> (9) -> None

class Solution:
    def deleteNode(self, node):
        # Step 1
        node.val = node.next.val
        # Step 2
        node.next = node.next.next
        """
        :type node: ListNode
        :rtype: void Do not return anything, modify node in-place instead.
        """
        