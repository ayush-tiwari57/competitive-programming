"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    l=list(map(int,input().split()))
    s=sum(l)
    if max(l)>s//2:
        print('T')
    else:
        if s%2:
            print('T')
        else:
            print('HL')

t=int(input())
for _ in range(t):
    solution()