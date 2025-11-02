class Solution:
    def isPalindrome(self, s: str) -> bool:
        w = ''.join(c.lower() for c in s if c.isalnum())
        i ,j = 0,len(w)-1
        while(i<j):
            if(w[i]==w[j]):
                i+=1
                j-=1
            else:
                return False
        return True