"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline
def solution():
    n=int(input())
    a=[]
    m=1e18
    b=[]
    ans=0
    for i in range(n):
        x,y=map(int,input().split())
        a.append(x)
        b.append(y)
    for i in range(n):
        z=(i+1)%n
        val=min(a[z],b[i])
        ans+=a[z]-val
        m=min(m,val)
    ans+=m
    print(ans)
for _ in range(int(input())):
    solution()