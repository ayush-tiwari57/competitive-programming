"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    l=list(map(int,input().split()))
    print(max(l)+1)
    

t=int(input())
for _ in range(t):
    solution()