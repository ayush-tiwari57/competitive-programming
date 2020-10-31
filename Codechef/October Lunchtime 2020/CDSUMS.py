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
    
    print((r*(r+1))//2)
    
t=int(input())
for _ in range(t):
    solution()