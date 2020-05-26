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
        a,b=map(int,input().split())
        x=min(a,b)
        y=max(a,b)
        x*=2
        if x>y:
            print(x**2)
        else:
            print(y**2)
solution()