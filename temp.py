from functools import cache

n = 6
stones = [30, 10, 60, 10, 60, 50]

dp = [float('inf')] * n
dp[0] = 0

for i in range(1, n):
    dp[i] = min(dp[i], dp[i - 1] + abs(stones[i] - stones[i - 1]))

    if i > 1:
        dp[i] = min(dp[i], dp[i - 2] + abs(stones[i] - stones[i - 2]))

print(dp)
