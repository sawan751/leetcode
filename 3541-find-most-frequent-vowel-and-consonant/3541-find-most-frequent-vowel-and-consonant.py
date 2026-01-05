class Solution(object):
    def maxFreqSum(self, s):
        """
        :type s: str
        :rtype: int
        """
        char = {}
        x = 0
        y = 0
        v = ["a","e","i","o","u"]
        for ch in s:
            if ch in char:
                char[ch] += 1
                continue
            char[ch] = 1
        for char,num in char.items():
            if char in v:
                x = max(x,num)
            else:
                y = max(y,num)
        return x+y
