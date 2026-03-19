class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        start = 0
        end = len(nums) - 1
        def find(target, start, end):
            if start > end:
                return start
            middle = int((start + end)/2)
            
            if target == nums[middle]:
                return middle
            elif nums[middle] > target:
                return find(target, start, middle-1)
            elif nums[middle] < target:
                return find(target, middle+1, end)
         
        return find(target, start, end)