class Solution(object):
    def findPeakElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        i = 0
        j = len(nums)-1
        while(i < j):
            s = i+j
            mid = i + (j-i)//2
            if(nums[mid-1]<nums[mid] and nums[mid]>nums[mid+1]):
                return mid
            elif nums[mid]<nums[mid+1]:
                i = mid+1
            elif(nums[mid+1]<nums[mid]):
                j = mid

        return i
            


