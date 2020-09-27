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
    l.sort()
    ans=0
    for i in range(1,n):
        if l[i]<=k:
            ans+=(k-l[i])//l[0]
    print(ans)

t=int(input())
for _ in range(t):
    solution()