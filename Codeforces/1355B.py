"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

 """
import sys
input = sys.stdin.buffer.readline
from collections import Counter
def solution():
    for _ in range(int(input())):
        
        # This is the main code
        n=int(input())
        l=list(map(int,input().split()))
        l.sort()
        c=Counter(l)
        x=0
        ans=0
        for i in range(n):
            c[l[i]]+=x
            # print(c)
            if c[l[i]]>=l[i]:
                x=c[l[i]]-l[i]
                ans+=1
            else:
                x=c[l[i]]
            del c[l[i]]
        print(max(1,ans))
solution()