class Solution(object):
    def minOperations(self, s):
        """
        :type s: str
        :rtype: int
        """
        w1 = 0
        w2 = 0
        for i in range(len(s)):
            if(i%2 == 0):
                if(s[i] == "0"):
                    w2 +=1
            
                else:
                    w1+=1
            else:
                if(s[i] == "1"):
                    w2+=1
                else:
                    w1+=1
            
        return min(w1,w2)