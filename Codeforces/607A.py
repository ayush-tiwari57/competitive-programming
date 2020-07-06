"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n=int(input())
    a=[0]*(2*10**6)
    dp=[0]*(2*10**6)
    for i in range(n):
        x,y=map(int,input().split())
        a[x]=y
    if a[0]>0:  
        dp[0]=1
    for i in range(1,len(dp)):
        if a[i]==0:
            dp[i]=dp[i-1]
        else:
            if i<=a[i]:
                dp[i]=1
            else:
                dp[i]=dp[i-a[i]-1]+1
    print(n-max(dp))
solution()