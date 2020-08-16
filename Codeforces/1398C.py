"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    s=list(input())
    l=[]
    for i in range(n):
        l.append(int(s[i]))
    d={}
    d[0]=1
    pre=[0]*(n+2)
    for i in range(1,n+1):
        pre[i]+=pre[i-1]+l[i-1]
    ans=0
    for i in range(1,n+1):
        x=pre[i]-i
        ans+=(d.get(x,0))
        d[x]=d.get(x,0)+1
    print(ans)
t=int(input())
for _ in range(t):
    solution()