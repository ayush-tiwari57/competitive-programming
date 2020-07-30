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
    x=l
    y=2*l
    if y<=r:
        print(x,y)
    else:
        print(-1,-1)
for _ in range(int(input())):
    solution()