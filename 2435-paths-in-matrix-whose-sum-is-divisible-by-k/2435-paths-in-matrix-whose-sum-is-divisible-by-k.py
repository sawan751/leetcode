class Solution:
    def numberOfPaths(self, grid: List[List[int]], k: int) -> int:
        if not grid or not grid[0]:
            return 0
        
        m, n = len(grid), len(grid[0])
        MOD = 10**9 + 7
        
        dp = [[[0] * k for _ in range(n)] for _ in range(m)]
        dp[0][0][grid[0][0] % k] = 1
        
        for i in range(m):
            for j in range(n):
                if i == 0 and j == 0:
                    continue
                curr = grid[i][j]
                for r in range(k):
                    # from above
                    if i > 0:
                        prev_rem = (r - curr % k + k) % k
                        dp[i][j][r] = (dp[i][j][r] + dp[i-1][j][prev_rem]) % MOD
                    # from left
                    if j > 0:
                        prev_rem = (r - curr % k + k) % k
                        dp[i][j][r] = (dp[i][j][r] + dp[i][j-1][prev_rem]) % MOD
        
        return dp[m-1][n-1][0]