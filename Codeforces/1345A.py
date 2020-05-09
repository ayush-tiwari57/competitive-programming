"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,m=map(int,input().split())
    if n==1 or m==1:
        print('YES')
    elif n==2 and m==2:
        print('YES')
    else:
        print('NO')
for _ in range(int(input())):
    solution()