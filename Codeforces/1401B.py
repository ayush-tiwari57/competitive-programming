"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    x0,x1,x2=map(int,input().split())
    y0,y1,y2=map(int,input().split())
    ans=0
    m=min(x0,y2)
    x0-=m
    y2-=m
    m=min(x1,y0)
    x1-=m
    y0-=m
    m=min(x2,y1)
    ans+=2*m
    ans-=2*(min(y2,x1))
    print(ans)
t=int(input())
for _ in range(t):
    solution()