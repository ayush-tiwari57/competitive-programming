"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,k=map(int,input().split())
    if k>n:
        print(k-n)
    else:
        if((n-k)%2):
            print(1)
        else:
            print(0)

t=int(input())
for _ in range(t):
    solution()