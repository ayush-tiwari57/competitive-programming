"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    dp=[0]*n
    for i in range(1,n):
        m=2e12
        for j in range(1,k+1):
            m=min(m,dp[max(0,i-j)]+abs(l[i]-l[max(0,i-j)]))
        dp[i]=m
    print(dp[n-1])

solution()