class Solution(object):
    def addStrings(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        if num1 == "0" and num2 == "0":
            return "0"
        if num2 == "0" or num1 == "0":
            if num2 == "0":
                return num1
            else:
                return num2
        i = len(num1)
        j = len(num2)
        carry = 0
        ans = []
        while(i> 0 or j>0 or carry >0):
            s = carry
            
            if i>0:
                s += int(num1[i-1])
                i-=1
            if j>0:
                s +=int(num2[j-1])
                j-=1
            
            carry = s //10
            ans.append(s%10)
        ans.reverse()
        return ''.join(map(str,ans))
