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
    beg=0
    end=10**12
    m=max(l)
    s=sum(l)
    while beg<end-1:
        mid=(beg+end)//2
        if n*mid-s>=mid and mid>=m:
            end=mid
        else:
            beg=mid
    print(beg+1)

solution()