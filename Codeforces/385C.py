"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def sieve(N,c):
    p=[-1]*(N)
    a=[0]*(N)
    x=2
    for x in range(2,N):
        if p[x]==-1:
            cnt=0
            for i in range(x,10**7+1,x):
                p[i]=1
                cnt+=c[i]
            a[x]=cnt
    return a
def solution():
    n=int(input())
    N=10**7+2
    l=list(map(int,input().split()))
    c=[0]*N
    for i in l: 
        c[i]+=1
    a=sieve(N,c)
    for i in range(1,N):
        a[i]+=a[i-1]
    m=int(input())
    for i in range(m):
        l,r=map(int,input().split())
        if l>10**7:
            print(0)
            continue
        r=min(10**7,r)
        print(a[r]-a[l-1])


solution()