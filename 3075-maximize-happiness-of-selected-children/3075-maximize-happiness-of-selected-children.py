class Solution(object):
    def maximumHappinessSum(self, happiness, k):
        """
        :type happiness: List[int]
        :type k: int
        :rtype: int
        """
        happiness.sort(reverse = True)
        ans = 0
        for i in range(k):
            s = happiness[i]-i
            if(s >0):
                ans += s
            else:
                break
        return ans
