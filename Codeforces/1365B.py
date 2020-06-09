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
        n=int(input())
        a=list(map(int,input().split()))
        b=list(map(int,input().split()))
        z=sorted(a)
        if z==a:
            print('YES')
            continue
        x=b.count(0)
        if x==n or x==0:
            print('NO')
        else:
            print('YES')


solution()