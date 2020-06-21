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
    beg=1
    end=10**9
    ans=2e19
    while beg<=end:
        mid=(beg+end)//2
        l1=0
        for i in range(n):
            if l1%2==1 and l[i]<=mid:
                l1+=1
            elif l1%2==0:
                l1+=1
        l2=0
        for i in range(n):
            if l2%2==0 and l[i]<=mid:
                l2+=1
            elif l2%2==1:
                l2+=1
        if max(l2,l1)>=k:
            ans=min(ans,mid)
            end=mid-1
        else:
            beg=mid+1
    print(ans)
solution()