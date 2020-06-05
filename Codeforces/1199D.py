"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n=int(input())
    l=list(map(int,input().split()))
    m=-1
    a=[-1]*n
    q=[]
    for _ in range(int(input())):
        t=list(map(int,input().split()))
        q.append(t)
    for t in q[::-1]:
        if t[0]==1 and a[t[1]-1]==-1:
            a[t[1]-1]=max(t[2],m)
        if t[0]==2:
            m=max(t[1],m)
    for i in range(n):
        if a[i]==-1:
            a[i]=max(l[i],m)
    print(*a)

solution()