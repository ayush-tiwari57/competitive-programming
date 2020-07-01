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
    l=[0]+l
    # print(l)
    dp=[2*10**9]*(n+1)
    dp[1]=0
    for i in range(1,n+1):
        j=i
        x=1
        while j<=n:
            dp[j]=min(dp[j],dp[i]+abs(l[i]-l[j]))
            if i!=j:
                x*=2
            j=i+x
    print(dp[n])

solution()