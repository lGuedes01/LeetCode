class Solution(object):
    def twoSum(self, nums, target):
        hashmap = {} #valor : indx

        for i, n in enumerate(nums):
            rest = target - n
            if rest in hashmap:
                return (hashmap[rest], i)
            hashmap[n] = i
        return
        