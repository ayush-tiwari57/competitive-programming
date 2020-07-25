"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000
    
"""
import sys
input = sys.stdin.buffer.readline
    
def solution():
    
    # This is the main code
    n=int(input())
    maxn=200004
    l=list(map(int,input().split()))
    dp=[0]*maxn
    d={}
    for i in range(n):
        dp[i]=max(dp[i],d.get(l[i]-1,0)+1)
        d[l[i]]=dp[i]
    m=max(dp) 
    ans=[]
    for i in range(n+1):
        if dp[i]==m:
            ans.append(i+1)
            break
    i=ans[0]-1
    x=l[i]
    i-=1
    while i>=0:
        if x-1==l[i]:
            ans.append(i+1)
            x=l[i]
        i-=1
    ans.reverse()
    print(m)
    print(*ans)
    
t=1
for _ in range(t):
    solution()