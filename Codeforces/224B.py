"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n,k=map(int,input().split())
    li=list(map(int,input().split()))
    d={}
    l=-1
    r=-1
    m=2e9
    ma=2e9
    for i in range(n):
        d[li[i]]=i+1
        if len(d)==k:
            l=min(d.values())
            r=max(d.values())
            break
    # print(d)
    print(l,r)
solution()