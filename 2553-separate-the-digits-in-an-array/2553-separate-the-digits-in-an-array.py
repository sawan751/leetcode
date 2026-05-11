class Solution(object):
    def separateDigits(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = []
        for i in range(len(nums)):
            s = str(nums[i])
            j = 0
            while(j<len(s)):
                ans.append(int(s[j]))
                j +=1

        return ans 
        