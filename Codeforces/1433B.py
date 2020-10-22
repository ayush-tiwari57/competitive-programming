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
    i=0
    ans=0
    while i<n and l[i]==0:
        i+=1
    j=n-1
    while j>0 and l[j]==0:
        j-=1
    while i<j:
        while i<j and l[i]==1:
            i+=1
        while i<j and l[i]==0:
            ans+=1
            i+=1
    print(ans)
t=int(input())
for _ in range(t):
    solution()