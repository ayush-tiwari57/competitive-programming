"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    m=10**7+1
    sieve=[-1]*(m)
    for i in range(2,m):
        if sieve[i]==-1:
            sieve[i]=i
            for j in range(i*i,m,i):
                if sieve[j]==-1:
                    sieve[j]=i
    n=int(input())
    l=list(map(int,input().split()))
    a=[]
    b=[]
    for i in range(n):
        x=l[i]
        y=sieve[x]
        while x%y==0:
            x//=y
        if x==1:
            a.append(-1)
            b.append(-1)
        else:
            a.append(y)
            b.append(x)
    print(*a)
    print(*b)


solution()