"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    l=list(map(int,input().split()))
    m=max(l)
    d={}
    for i in range(n):
        d[l[i]]=i+1
    ind =-1
    for i in range(n):
        x=l[i]
        y=1
        while x*y<=m:
            if d.get(x*y,-1)!=-1:
                if d[x*y]>i+1:
                    # print(x,y,ind)
                    ind=d[x*y]
            y+=1
    print(ind)

t=int(input())
for _ in range(t):
    solution()