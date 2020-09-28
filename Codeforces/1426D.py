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
    d[0]=1
    ans=0
    pre=0
    for i in range(n):
        pre+=l[i]
        if d.get(pre,0)>0:
            ans+=1
            pre=l[i]
            d.clear()
            d[0]=1
            d[l[i]]=1
        else:
            d[pre]=1
    print(ans)
t=1
for _ in range(t):
    solution()