"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,m=map(int,input().split())
    if abs(n-m)<=1:
        print(n+m)
    else:
        
        print(max(n,m)+max(n,m)-1)    
t=int(input())
for _ in range(t):
    solution()