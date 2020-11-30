"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    a,b=map(int,input().split())
    a-=1
    print(a,b)

t=int(input())
for _ in range(t):
    solution()