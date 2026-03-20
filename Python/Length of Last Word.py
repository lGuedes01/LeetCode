class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """

        count = 0
        for l in s[::-1]:
            if(l != " "):
                count += 1
            if(count != 0 and l == " "):
                return count
        return count
        