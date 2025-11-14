class Solution(object):
    def luckyNumbers(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        m = len(matrix)
        res = []
        for i in range(m):
            row_min = min(matrix[i])
            col = matrix[i].index(row_min)

            col =  max(matrix[r][col] for r in range(m))
            if row_min == col:
                res.append(row_min)
            
        return res

        