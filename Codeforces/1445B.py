"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    a,b,c,d=map(int,input().split())
    print(min(max(a+b,c+d),a+c))
    
t=int(input())
for _ in range(t):
    solution()