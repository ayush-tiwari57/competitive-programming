"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    if n%2==0:
        print(n//2-1)
    else:
        print(n//2)
for _ in range(int(input())):
    solution()