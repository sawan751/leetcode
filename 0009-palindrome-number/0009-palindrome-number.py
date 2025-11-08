class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        s = str(x)
        r = ''
        for i in range(len(s)-1,-1,-1):
            r += s[i]
        if(r==s):
            return True
        else:
            return False


        