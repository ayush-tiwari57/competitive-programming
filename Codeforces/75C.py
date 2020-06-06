"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
import math
from bisect import bisect_right
input = sys.stdin.buffer.readline
def solution():
    n,m=map(int,input().split())
    x=math.gcd(n,m)
    l=[]
    for i in range(1,int(x**0.5)+1):
        if x%i==0:
            if x//i==i:
                l.append(i)
            else:
                l.append(i)
                l.append(x//i)
    l.sort()
    for _ in range(int(input())):
        a,b=map(int,input().split())    
        x=bisect_right(l,b)
        if l[x-1]<a:
            print(-1)
        else:
            print(l[x-1])


solution()