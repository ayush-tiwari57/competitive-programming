"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
from collections import Counter

def solution():
    
    # This is the main code
    n,q=map(int,input().split())
    s=list(input())
    cs=Counter(s)
    for i in range(q):
        ans=0
        k=int(input())
        for j in cs:
            x=cs[j]-k
            if x>0:
                ans+=x
        print(ans)
for _ in range(int(input())):
    solution()