class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        a = []
        i = 0
        j = 0
        while(i<=len(s)-1 and j<=len(t)-1):
            if(s[i]==t[j]):
                a.append(s[i])
                i +=1
            j +=1
        n = ''.join(a)
        return n ==s