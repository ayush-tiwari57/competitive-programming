"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,a,b,c,d=map(int,input().split())
    l=c-d
    r=c+d
    mi=a-b
    mx=a+b
    if n*mi<=r and n*mx>=l:
        print('YES')
    else:
        print('NO')

for _ in range(int(input())):
    solution()