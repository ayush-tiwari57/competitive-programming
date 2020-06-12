"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        n,m=map(int,input().split())
        x=min(n,m)
        y=max(n,m)
        if x<=y//2:
            print(x)
        else:
            print((n+m)//3)
solution()