class Solution:
    def maxAdjacentDistance(self, nums: List[int]) -> int:
        
        diff = nums[-1]-nums[0]
        diff = max(diff,nums[0]-nums[-1])
        print(diff)
        for i in range(len(nums)-1):
            diff = max(nums[i+1]-nums[i],diff)
            diff = max(nums[i]-nums[i+1],diff)

        return diff