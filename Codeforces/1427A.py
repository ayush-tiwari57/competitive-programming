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
    if sum(l)==0:
        print('NO')
    elif sum(l)>0:
        l.sort(reverse=True)
        print('YES')
        print(*l)
    else:
        print('YES')
        l.sort()
        print(*l)
    
t=int(input())
for _ in range(t):
    solution()