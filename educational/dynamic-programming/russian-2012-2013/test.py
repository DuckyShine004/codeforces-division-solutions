coins = [1, 2, 3, 4, 5]
target = 100

dp = [float("inf")] * (target + 1)
dp[0] = 0

for i in range(target):
    for x in coins:
        if i + x <= target:
            dp[i + x] = min(dp[i + x], dp[i] + 1)

print(dp)
