class Solution(object):
    def isThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n<4:
            return False

        else:
            count = 0
            i = n -1
            while i>1:
                if n%i ==0:
                    count +=1
                i -= 1
                if count >1:
                    return False
            if count<1:
                return False
        return True

        