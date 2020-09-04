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
    if n==1:
        print(1,1)
        print(-1*l[0])
        print(1,1)
        print(0)
        print(1,1)
        print(0)
    else:
        print(1,n-1)
        for i in range(n-1):
            x=l[i]%(n)
            print((n-1)*x,end=' ')
            l[i]+=x*(n-1)
        print()
        print(n,n)
        print(-(l[n-1]%n))
        l[n-1]-=l[n-1]%n
        l[n-1]-=l[n-1]%n
        print(1,n)
        for i in range(n):
            print(-1*l[i])
        print()

t=1
for _ in range(t):
    solution()