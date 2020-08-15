"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,d,m=map(int,input().split())
    a=list(map(int,input().split()))
    g=[]
    l=[]
    for i in range(n):
        if a[i]>m:
            g.append(a[i])
        else:
            l.append(a[i])
    g.sort(reverse=True)
    l.sort(reverse=True)
    if(g==[]):
        print(sum(l))
    else:
        for i in range(1,len(l)):
            l[i]+=l[i-1]
        for i in range(1,len(g)):
            g[i]+=g[i-1]
        l=[0]+l
        k=len(g)
        x=l[-1]
        for i in range(k,10**5+6):
            g.append(0)
        for i in range(len(l),10**5+6):
            l.append(x)
        ans=0
        for i in range((k+d)//(1+d),k+1):
            x=(i-1)*(d+1)+1
            if x<=n:
                # print(i,x)
                s=g[i-1]+l[n-x]
                ans=max(ans,s)
        print(ans)
t=1
for _ in range(t):
    solution()