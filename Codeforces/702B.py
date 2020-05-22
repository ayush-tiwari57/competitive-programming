"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline
from collections import Counter
def solution():
    po=[2**i for i in range(31)]
    n=int(input())
    l=list(map(int,input().split()))
    c=Counter(l)
    ans=0
    for i in range(n):
        for j in po:
            x=j-l[i]
            if c.get(x,0)>0:
                # print(l[i],x)
                if x==l[i]:
                    ans+=(c[x]-1)
                else:
                    ans+=c[x]
    print(ans//2)




solution()