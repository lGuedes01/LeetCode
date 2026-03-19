class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """

        n = len(digits)
        for c in range(n-1, -1, -1):
            digits[c] += 1
            if digits[c] == 10:
                digits[c] = 0
            else:
                return digits
        digits.insert(0,1)
        return digits
