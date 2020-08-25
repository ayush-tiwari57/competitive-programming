"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    mod=10**9+7
    n=int(input())
    l=list(map(int,input().split()))
    l=[0]+l
    dp=[0]*(n+2)
    for i in range(1,n+1):
        dp[i+1]=(2*dp[i]+2-dp[l[i]])%mod
        dp[i+1]%=mod
    print(dp[-1]%mod)
t=1
for _ in range(t):
    solution()