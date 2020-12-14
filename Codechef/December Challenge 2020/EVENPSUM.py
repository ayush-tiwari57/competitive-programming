"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    x,y=map(int,input().split())
    ex=x//2
    ox=x-ex
    ey=y//2
    oy=y-ey
    print(ey*ex+oy*ox)

t=int(input())
for _ in range(t):
    solution()