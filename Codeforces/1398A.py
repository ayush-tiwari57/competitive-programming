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
    k=n-1
    j=1
    if(l[i]+l[j]<=l[k]):
        print(i+1,j+1,k+1)
    else:
        print(-1)
t=int(input())
for _ in range(t):
    solution()