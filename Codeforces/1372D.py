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
    pre=[0]*(n+1)
    suff=[0]*(n+1)
    for i in range(n):
        pre[i]=l[i]
        if i>=2:
            pre[i]+=pre[i-2]
    for i in range(n-1,-1,-1):
        suff[i]=l[i]
        if i<=n-3:
            suff[i]+=suff[i+2]
    ans=-1
    # print(pre)
    # print(suff)
    for i in range(n):
        ans=max(ans,suff[i]+pre[i-1])
    print(ans)
solution()