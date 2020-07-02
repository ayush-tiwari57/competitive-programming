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
        a,b,n,m=map(int,input().split())
        if n+m>a+b:
            print('NO')
        elif min(a,b)<m:
            print('NO')
        else:
            print('YES')



solution()