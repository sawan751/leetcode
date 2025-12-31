class Solution(object):
    def sumAndMultiply(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n==0:
            return 0
        s = str(n)
        x = 0
        summ = ''
        for i in range(len(s)):
            if s[i] != "0":
                summ += s[i]
                x += int(s[i])
        
        return int(summ)*x