class Solution:
    def longestCommonPrefix(self, strs):
        strs.sort()
        length = len(strs)

        i = 0
        j = len(strs[0])
        while length > 0:
            i = 0
            while i < len(strs[0]):
                if strs[0][i] == strs[length - 1][i]:
                    i += 1    
                else:
                    break
            length -= 1
            if j > i:
                j = i

        return strs[0][0:j]
                
                
        