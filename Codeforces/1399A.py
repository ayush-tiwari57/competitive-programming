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
    l.sort()
    flag=0
    for i in range(1,n):
        if l[i]-l[i-1]>1:
            flag=1
    if(flag):
        print('NO')
    else:
        print('YES')

t=int(input())
for _ in range(t):
    solution()