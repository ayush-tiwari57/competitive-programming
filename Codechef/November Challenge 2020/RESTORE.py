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
    d={}
    x=4*(10**6)
    ans=[]
    for i in range(n):
        if d.get(l[i],0)==0:
            d[l[i]]=x
            x-=1
        ans.append(d[l[i]])
    print(*ans)
    
t=int(input())
for _ in range(t):
    solution()