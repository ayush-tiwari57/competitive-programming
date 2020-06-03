"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n,x,y=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=[]
    for i in range(n):
        z=abs(a[i]-b[i])
        c.append(z)
    i=0
    z=x+y
    for i in range(z):
        c.sort(reverse=True)
        c[0]=abs(c[0]-1)
    for i in range(n):
        c[i]*=c[i]
    print(sum(c))



solution()