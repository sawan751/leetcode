class Solution(object):
    def minPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums = sorted(nums)
        i = 0
        j = len(nums) -1
        s = nums[i]+ nums[j]
        while(i<j):
            s = max(s,nums[i]+ nums[j])
            i +=1
            j -=1

        return s