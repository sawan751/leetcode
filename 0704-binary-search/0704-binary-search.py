class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        i = 0
        j = len(nums)-1
        if(j ==0 and nums[j] ==target):
            return 0
        while(i<j):
            mid = int((i+j)//2)
            if(nums[mid]==target):
                return mid
            elif(nums[mid]<target):
                i = mid+1
            else:
                j = mid-1
        return -1
