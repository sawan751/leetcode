class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        if k ==1:
            return 0
        
        nums.sort()
        min_dif = float('inf')

        for i in range(len(nums)-k+1):
            diff = nums[i+k-1] - nums[i]
            min_dif = min(min_dif,diff)
        
        return min_dif