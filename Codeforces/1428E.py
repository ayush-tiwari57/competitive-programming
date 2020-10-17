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
    l=list(map(int,input().split()))
    l.sort(reverse=True)
    s=sum(l)
    d={}
    x=s//k
    if s%k!=0:
        x+=1
    for i in range(n):
        if l[i]>=x:
            z=l[i]//x
            d[x]=d.get(x,0)+z
            y=l[i]-x*z
            d[y]=d.get(y,0)+1
        else:
            d[l[i]]=d.get(l[i],0)+1
    ans=0
    # print(d)
    for i in d:    
        ans+=d[i]*(i**2)
    print(ans)
t=1
for _ in range(t):
    solution()