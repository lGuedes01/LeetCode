class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        for n in nums:
            for c in range(nums.count(n)-1):
                nums.remove(n)
        return len(nums)
        
