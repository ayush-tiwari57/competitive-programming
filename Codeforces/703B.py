"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    lk=list(map(int,input().split()))
    s=sum(l)
    d={}
    for i in lk:
        d[i-1]=d.get(i-1,0)+(s-l[i-1])
    for i in range(n):
        if d.get(i,0)==0:
            x=l[(i+1)%n]+l[(i-1)%n]
            d[i]=d.get(i,0)+x
    
solution()