class Solution:
    def hasAllCodes(self, s: str, k: int) -> bool:
        N = len(s)
        seen = set()

        for i in range(N-k):
            seen.add(s[i:i+k])
        return len(seen) == pow(2,k)