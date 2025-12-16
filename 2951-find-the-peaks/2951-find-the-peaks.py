class Solution(object):
    def findPeaks(self, mountain):
        """
        :type mountain: List[int]
        :rtype: List[int]
        """
        ans = []
        for i in range(1,len(mountain)-1):
            if(mountain[i-1]<mountain[i]>mountain[i+1]):
                ans.append(i)
        return ans