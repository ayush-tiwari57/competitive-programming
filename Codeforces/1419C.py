"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,x=map(int,input().split())
    l=list(map(int,input().split()))
    if l.count(x)==n:
        print(0)
    elif l.count(x)>0:
        print(1)
    else:
        s=0
        for i in range(n):
           s+=x-l[i]
        if s==0:
            print(1)
        else: 
            print(2)

t=int(input())
for _ in range(t):
    solution()