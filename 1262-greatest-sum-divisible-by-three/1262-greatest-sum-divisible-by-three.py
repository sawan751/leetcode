class Solution(object):
    def maxSumDivThree(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l = len(nums)
        s = sum(nums)
        if(s%3 == 0):
            return s
        else:
            best = 0
            for i in range(0,l):
                val = s-nums[i]
                if(val%3 ==0):
                    best = max(val,best)
            for i in range(0,l):
                for j in range(i+1,l):
                    val = s-nums[i]-nums[j]
                    if val%3 ==0:
                        best = max(best,val)
        return best

        