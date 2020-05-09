s = input().split()
n = int(s[0])
a = int(s[1])
b = int(s[2])
c = int(s[3])
dp = [-4001 for i in range(4000+1)]
dp[a] = 1
dp[b] = 1
dp[c] = 1

for i in range(n+1):
    if i-a >= 0:
        dp[i] = max(dp[i],1+dp[i-a])
    if i-b >= 0:
        dp[i] = max(dp[i],1+dp[i-b])
    if i-c >= 0:
        dp[i] = max(dp[i],1+dp[i-c])

print(dp[n])