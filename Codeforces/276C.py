"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n,q=map(int,input().split())
    l=list(map(int,input().split()))
    ql=[0]*(n+1)
    for i in range(q):
        x,y=map(int,input().split())
        ql[x-1]+=1
        ql[y]-=1
    for i in range(1,len(ql)):
        ql[i]+=ql[i-1]
    
    ql.sort(reverse=True)
    l.sort(reverse=True)
    s=0
    for i in range(n):
        s+=l[i]*ql[i]
    print(s)
        
solution()