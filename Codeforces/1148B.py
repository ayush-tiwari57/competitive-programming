"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n,m,ta,tb,k=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    
    j=0
    out=-1
    for i in range(m):
        if j<n and a[j]+ta<=b[i]:
            j+=1
            k-=1
            if k<0:
                out=b[i]+tb
                break
    print(out)

solution()