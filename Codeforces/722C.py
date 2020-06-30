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
    p=list(map(int,input().split()))
    pre=[0]*200000
    low=[0]*200000
    high=[0]*200000
    ans=0
    a=[]
    for i in range(n):
        pre[i+1]=pre[i]+l[i]
    for i in range(n-1,-1,-1):
        a.append(ans)
        lo=low[p[i]-1]
        h=high[p[i]+1]
        if lo==0:
            lo=p[i]
        if h==0:
            h=p[i]
        high[lo]=h
        low[h]=lo
        ans=max(ans,pre[h]-pre[lo-1])
    a.reverse()
    for i in a:
        print(i)

solution()