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
    ps=0
    for i in range(n):
        if l[i]>=0:
            ps+=l[i]
        else:
            x=ps
            ps-=min(ps,abs(l[i]))
            l[i]+=min(x,abs(l[i]))
    print(ps)

t=int(input())
for _ in range(t):
    solution()