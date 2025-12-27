class Solution(object):
    def addToArrayForm(self, num, k):
        """
        :type num: List[int]
        :type k: int
        :rtype: List[int]
        """
        ans = []
        sum = ''
        for i in num:
            sum += str(i)
        sum = int(sum) +k

        while(sum != 0):
            d = sum%10
            ans.append(d)
            sum = sum//10
        
        return ans[::-1]

        