"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    x,y,k=map(int,input().split())
    d=k*(y+1)
    if (d-1)%(x-1)==0:
        ans=(d-1)//(x-1)
    else:
        ans=(d-1)//(x-1)+1
    print(ans+k)

t=int(input())
for _ in range(t):
    solution()