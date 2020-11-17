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
    l=[0]+l
    i=0
    j=n
    if n%2!=0:
        z=n+1
        x=n//2
        y=n//2+1
    else:
        z=n
        y=n//2+1
        x=n//2-1
    a=x
    b=y
    ans=0
    # print(x,y)    
    while k*n-b>=a:
        # print(l[a],l[len(l)-b])
        ans+=l[len(l)-b]
        b+=y
        a+=x
    print(ans)
t=int(input())
for _ in range(t):
    solution()