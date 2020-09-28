"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,x=map(int,input().split())
    n=max(0,n-2)
    z=n//x
    if n%x!=0:
        z+=1
    print(z+1)

t=int(input())
for _ in range(t):
    solution()