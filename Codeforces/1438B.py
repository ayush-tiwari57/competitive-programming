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
    d={}
    l=list(map(int,input().split()))
    for i in range(n):
        if d.get(l[i],0)!=0:
            print('YES')
            return
        d[l[i]]=1
    print('NO')
    
t=int(input())
for _ in range(t):
    solution()