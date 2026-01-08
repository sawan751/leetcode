class Solution(object):
    def alternateDigitSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        num = str(n)
        s = 0
        for i in range(len(num)):
            if(i%2 ==0):
                s += int(num[i])
            else:
                s -= int(num[i])
        return s