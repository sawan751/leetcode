class Solution(object):
    def isgood(self,num):
        good = False
        while num!= 0:
            d = num%10

            if d==3 or d==4 or d ==7:
                return False
            if d == 2 or d==5 or d== 9 or d ==6:
                good = True
            num = num//10
        return good
            

    def rotatedDigits(self, n):
        """
        :type n: int
        :rtype: int
        """
        count = 0
        for i in range(1,n+1):
            if self.isgood(i):
                count += 1
        return count