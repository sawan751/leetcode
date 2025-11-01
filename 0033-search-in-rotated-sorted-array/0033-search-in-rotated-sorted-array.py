class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        st = 0
        end = len(nums)-1
        while(st<= end):
            mid = (st +end )//2
            if(nums[mid]==target):
                return mid
            elif(nums[st]<=nums[mid]):
                if(nums[st]<=target<nums[mid]):
                    end = mid-1
                else:
                    st = mid +1
            else:
                if(nums[st]>target>=nums[mid]):
                    st = mid+1
                else:
                    end = mid - 1
        return -1
