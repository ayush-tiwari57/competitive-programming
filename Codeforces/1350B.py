for _ in range(int(input())):
    n=int(input())
    dp=[1]*(n+1)
    l=list(map(int,input().split()))
    for i in range(n):
        j=2*i+1
        while j<n:
            if l[j]>l[i]:
                dp[j]=max(dp[j],1+dp[i])
            j+=i+1
    print(max(dp))
