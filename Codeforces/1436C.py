"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def fact(x):
    y=1
    for i in range(1,x+1):
        y*=i
        y%=(10**9+7)
    return y

def solution():
    
    # This is the main code
    n,x,pos=map(int,input().split())
    beg=0
    end=n
    mod=10**9+7
    ans=1
    big=n-x
    small=x-1
    while beg<end:
        mid=(beg+end)//2
        # print(mid,small,big)
        if mid==pos:
            ans*=fact(small+big)
            ans%=mod
            print(ans)
            break
        elif mid>pos:
            ans*=big
            ans=ans%mod
            if big>0:
                big-=1
            end=mid
        else:
            ans*=small
            ans%=mod
            if small>0:
                small-=1
            beg=mid+1

t=1
for _ in range(t):
    solution()