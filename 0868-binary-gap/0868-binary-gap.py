class Solution:
    def binaryGap(self, n: int) -> int:
        binary = bin(n)[2:]
        
        prev = -1
        ans = 0
        
        for i, bit in enumerate(binary):
            if bit == '1':
                if prev != -1:
                    ans = max(ans, i - prev)
                prev = i
        
        return ans