class Solution(object):
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if(len(nums)<3):
            return min(nums)
        for i in range(2):
            del nums(max(nums))
        return max(nums)