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
    s=sorted(l)
    m=min(l)
    flag=0
    for i in range(n):
        if l[i]%m:
            if s[i]!=l[i]:
                flag=1
    if flag:
        print('NO')
    else:
        print('YES')
t=int(input())
for _ in range(t):
    solution()