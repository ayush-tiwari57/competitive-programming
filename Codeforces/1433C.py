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
    m=max(l)
    for i in range(n):
        if l[i]==m:
            if i-1>=0 and l[i-1]<l[i]:
                print(i+1)
                return
            if i+1<n and l[i+1]<l[i]:
                print(i+1)
                return
    print(-1)
    
t=int(input())
for _ in range(t):
    solution()