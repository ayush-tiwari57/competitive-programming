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
    z=0
    o=0
    for i in range(n):
        if l[i]==0:
            z+=1
        else:
            o+=1
    if o<=n//2:
        ans=[0]*z
    else:
        ans=[1]*o
        if o%2:
            ans.pop()
    print(len(ans))
    print(*ans)
        
        
t=int(input())
for _ in range(t):
    solution()