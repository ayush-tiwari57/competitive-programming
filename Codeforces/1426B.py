"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,m=map(int,input().split())
    flag=0
    for i in range(n):
        a,b=map(int,input().split())
        c,d=map(int,input().split())
        if c==b:
            flag=1
    if m%2!=0:
        flag=0
    
    if flag==0:
        print('NO')
    else:
        print('YES')
t=int(input())
for _ in range(t):
    solution()