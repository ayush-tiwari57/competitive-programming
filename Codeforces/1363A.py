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
        n,x=map(int,input().split())
        l=list(map(int,input().split()))
        ecnt=ocnt=0

        for i in range(n):
            if l[i]%2==0:
                ecnt+=1
            else:
                ocnt+=1
        if ocnt%2==0:
            ocnt-=1
        if x%2==0:
            if ecnt>=1 and ocnt>=1 and ocnt+ecnt>=x:
                print('YES')
            else:
                print('NO')
        else:
            if ocnt>=1 and ocnt+ecnt>=x:
                print('YES')
            else:
                print('NO')

solution()