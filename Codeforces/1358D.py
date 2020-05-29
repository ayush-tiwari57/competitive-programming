"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def func(n):
    return (n*(n+1))//2

def solution():
    n,x=map(int,input().split())
    li=list(map(int,input().split()))
    li+=li
    sumd=[0]*(2*n+1)
    cntd=[0]*(2*n+1)
    for i in range(2*n-1,-1,-1):
        sumd[i]=sumd[i+1]+func(li[i])
        cntd[i]=cntd[i+1]+li[i]
    # print(sumd)
    # print(cntd)
    pos=2*n-1
    ans=0
    while pos>=n:
        l=0
        r=pos
        while l<=r:
            mid=(l+r)//2
            if cntd[mid]-cntd[pos+1]<x:
                r=mid-1
            else:
                beg=mid
                l=mid+1
        temp=0
        # print(li[beg])
        if beg!=pos:
            temp+=sumd[beg+1]-sumd[pos+1]
        z=li[beg]-x+cntd[beg+1]-cntd[pos+1]
        # print(z)
        temp+=func(li[beg])-func(z)
        ans=max(ans,temp)
        pos-=1
    print(ans)


solution()