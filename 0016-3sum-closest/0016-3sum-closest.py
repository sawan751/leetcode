class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums = sorted(nums)
        ans = 100000
        prev = nums[0]+nums[1]+nums[2]
        for i in range(len(nums)-2):
            j = i+1
            k = len(nums)-1

            while(j<k):
                diff = nums[i]+nums[j]+nums[k]

                if abs(diff-target)<abs(prev-target):
                    prev = diff
                if(diff<target):
                    j +=1
                elif diff>target:
                    k-=1
                else:
                    return diff
        return prev
