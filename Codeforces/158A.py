"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    ans=0
    for i in range(n):
        if l[i]>=l[k-1] and l[i]>0:
            ans+=1
    print(ans)

t=1
for _ in range(t):
    solution()