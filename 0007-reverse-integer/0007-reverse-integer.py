class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        n = False
        if x<0:
            n = True
            x = -x
        r = 0
        while(x>0):
            digit = x%10
            r =r*10+digit
            x = x//10
        if n:
            r = -r
        return r

        