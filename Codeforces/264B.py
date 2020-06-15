"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline
import math
def solution():
    n=int(input())
    l=list(map(int,input().split()))
    dp=[0]*(100005)
    cnt=[0]*(100005)
    ans=0
    for i in range(n):
        x=l[i]
        for j in range(1,int(x**0.5)+1):
            if x%j==0:
                cnt[i+1]=max(cnt[i+1],cnt[dp[x//j]]+1)
                if j>1:
                    cnt[i+1]=max(cnt[i+1],cnt[dp[j]]+1)
                ans=max(ans,cnt[i+1])
                dp[j]=i+1 
                dp[x//j]=i+1 
    print(ans)

solution()