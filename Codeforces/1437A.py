"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    l,r=map(int,input().split())
    if 2*l>r:
        print('YES')
    else:
        print('NO')
    
t=int(input())
for _ in range(t):
    solution()