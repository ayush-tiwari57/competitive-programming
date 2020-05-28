"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

import collections
def solution():
    n,q=map(int,input().split())
    Q=collections.deque()
    A=n*[0]
    B=A[:]
    L=[]
    s=n=0
    for _ in range(q):
        y,x=map(int,input().split())
        if 2>y:
            x-=1
            Q.append(x)
            B[x]+=1
            A[x]+=1
            s+=1
        elif 3>y:
            x-=1
            s-=A[x]
            A[x]=0
        else:
            while x>n:
                n+=1
                y=Q.popleft()
                B[y]-=1
                if(B[y]<A[y]):
                    A[y]-=1
                    s-=1
        L.append(s)
    print('\n'.join(map(str,L)))


solution()