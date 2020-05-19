"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline
from collections import Counter
def solution():
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    l.sort()
    c=Counter(l)
    i=0
    for i in l:
        x=i
        if c[i]!=1:
            continue
        if c[k*x]==1 and k*x!=x:
            c[k*x]-=1
    # print(c)
    print(sum(c.values()))
    
solution()