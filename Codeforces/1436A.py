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
    l=list(map(int,input().split()))
    if sum(l)==m:
        print('YES')
    else:
        print('NO')

t=int(input())
for _ in range(t):
    solution()