"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,m=map(int,input().split())
    l=[]
    dp=[1]*(n+1)
    for i in range(n):
        x,y=map(float,input().split())
        l.append([x,y]) 
    for i in range(1,n):
        for j in range(i):
            if(l[i][0]>=l[j][0]):
                dp[i]=max(dp[i],dp[j]+1)
    print(n-max(dp))
t=1
for _ in range(t):
    solution()