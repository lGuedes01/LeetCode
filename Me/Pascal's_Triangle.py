class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        triang = [ [1 for n in range(rows+1)] for rows in range(numRows)]
        for n_rows, row in enumerate(triang):
            #n_rows = 1 2 3 4 ...
            #row = [1, ..., 1]
            for i,j in enumerate(row):
                if i == 0 or n_rows == i:
                    triang[n_rows][i] = 1
                else:
                    triang[n_rows][i] = triang[n_rows-1][i-1] + triang[n_rows-1][i]
        return triang