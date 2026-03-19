class Solution(object):
    def uniqueOccurrences(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """

        st = set()

        lst = []
        for num in arr:
            if num not in st:
                st.add(num)
                lst.append([num, 1])
            else:
                for conj in lst:
                    if conj[0] == num:
                        conj[1] += 1
        
        occ_set = set()
        for conj in lst:
            len_set = occ_set.__len__()
            occ_set.add(conj[1])
            new_len_set = occ_set.__len__()
            if len_set == new_len_set:
                return False
        return True


arr = [1,2,2,1,1,3]

solution = Solution()

print(solution.uniqueOccurrences(arr))