class Solution:
    def minSum(self, nums1: List[int], nums2: List[int]) -> int:

        sum1 = sum(nums1)
        sum2 = sum(nums2)

        c1 = nums1.count(0)
        c2 = nums2.count(0)
        min1 = sum1+ c1
        min2 = sum2+ c2

        if min1<min2 and c1== 0:
            return -1

        if min2<min1 and c2 == 0:
            return -1
        return max(min1,min2)

        