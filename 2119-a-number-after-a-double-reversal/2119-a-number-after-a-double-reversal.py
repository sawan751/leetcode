class Solution(object):
    def isSameAfterReversals(self, num):
        """
        :type num: int
        :rtype: bool
        """
        newnum = num
        r = 0
        while newnum != 0:
            d = newnum%10

            r = r*10+d
            newnum = newnum//10
        newnum = r
        r = 0
        while newnum != 0:
            d = newnum%10

            r = r*10+d
            newnum = newnum//10
        print(r)
        return r == num
        

        