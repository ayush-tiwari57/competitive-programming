"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n=int(input())
    l=list(map(int,input().split()))
    dp=[0]*n
    dp[1]=abs(l[1]-l[0])
    for i in range(2,n):
        a=dp[i-1]+abs(l[i]-l[i-1])
        b=dp[i-2]+abs(l[i]-l[i-2])
        dp[i]=min(a,b)
    print(dp[n-1])

solution()