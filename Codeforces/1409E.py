"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    y=list(map(int,input().split()))
    pre=[0]*(n+1)
    l.sort()
    for i in range(n+1):
        pre[i]=pre[i-1]+l[i-1]
    ans=0
    for i in range(n):
        beg=0
        end=i
        while beg<end:
            mid=(beg+end)//2
            if l[end]-l[beg]>k:
                beg=mid+1
            else:
                end=mid
        left=pre[i+1]-pre[beg]

t=int(input())
for _ in range(t):
    solution()