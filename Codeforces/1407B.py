"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import math
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    l=list(map(int,input().split()))
    l.sort(reverse=True)
    ans=[0]*n
    ans[0]=l[0]
    flag=[0]*(n+1)
    flag[0]=1
    prev=l[0]
    for i in range(1,n):
        x=0
        for j in range(n):
            if flag[j]==1:
                continue
            g=math.gcd(prev,l[j])
            if g>x:
                x=g
                ele=j
        ans[i]=l[ele]
        prev=x
        flag[ele]=1
    print(*ans)
t=int(input())
for _ in range(t):
    solution()