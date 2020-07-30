"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000
    
"""
import sys
input = sys.stdin.buffer.readline
    
def solution():
    
    # This is the main code
    n,k,z=map(int,input().split())
    l=list(map(int,input().split()))
    ans=-1
    m=-1
    s=0
    for p in range(z+1):
        pos=k-2*p
        if pos<0:
            continue
        m=-1
        s=0
        for i in range(pos+1):
            if i<n-1:
                m=max(m,l[i]+l[i+1])
            s+=l[i]
        ans=max(ans,s+p*m)
    print(ans)
t=int(input())
for _ in range(t):
    solution()