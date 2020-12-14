"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,k=map(int,input().split())
    l=[]
    k=n-k
    for i in range(1,n+1):
        l.append(i)
    for i in range(0,n,2):
        if(k==0):
            break
        l[i]*=-1
        k-=1
    if(k>0):
        for i in range(n-1,-1,-1):
            if(k==0):
                break
            if l[i]%2==0:
                l[i]*=-1
                k-=1
    print(*l)
t=int(input())
for _ in range(t):
    solution()