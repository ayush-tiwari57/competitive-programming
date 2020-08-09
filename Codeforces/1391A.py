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
    l=[]
    for i in range(1,n+1):
        l.append(i)
    l.reverse()
    print(*l)
t=int(input())
for _ in range(t):
    solution()