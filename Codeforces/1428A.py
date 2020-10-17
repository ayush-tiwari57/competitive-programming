"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    x1,y1,x2,y2=map(int,input().split())
    if x1==x2 or y1==y2:
        print(abs(x1-x2)+abs(y1-y2))
    else:
        print(abs(x1-x2)+abs(y1-y2)+2)
    
t=int(input())
for _ in range(t):
    solution()