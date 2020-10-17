"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,x,p,k=map(int,input().split())
    p-=1
    k-=1
    l=list(map(int,input().split()))
    l.sort()
    if l[p]==x:
        print(0)
    else:
        if k>p:
            if l[p]<x:
                print(-1)
            else:
                print(k-p)
        elif k==p:
            print(1)
        else:
            print(p-k)
    
t=int(input())
for _ in range(t):
    solution()