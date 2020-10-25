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
    ans=[0]*n
    for i in range(n//2):
        ans[i]=l[n-i-1]
        ans[n-i-1]=-l[i]
    print(*ans)    
t=int(input())
for _ in range(t):
    solution()