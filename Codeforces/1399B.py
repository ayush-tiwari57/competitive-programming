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
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    ma=min(a)
    mb=min(b)
    ans=0
    for i in range(n):
        x=a[i]
        y=b[i]
        if a[i]!=ma and b[i]!=mb:
            ans+=min(x-ma,y-mb)
            a[i]-=min(x-ma,y-mb)
            b[i]-=min(x-ma,y-mb)
        ans+=(a[i]-ma)
        ans+=(b[i]-mb)
    print(ans)
t=int(input())
for _ in range(t):
    solution()