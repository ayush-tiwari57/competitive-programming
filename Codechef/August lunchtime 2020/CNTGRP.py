"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def modular(x, y, p) : 
    ret = 1   
    x = x % p  
    if (x == 0) : 
        return 0
  
    while (y > 0) : 
        if ((y & 1) == 1) : 
            ret = (ret * x) % p 
  
        y = y >> 1 
        x = (x * x) % p 
          
    return ret 
def solution():
    mod=10**9+7
    # This is the main code
    n,m=map(int,input().split())
    l=list(map(int,input().split()))
    d={}
    # l.sort()
    for i in l:
        d[i]=d.get(i,0)+1
    z=max(l)
    ans=1
    for i in range(2,z+1):
        if d.get(i,0)==0 or d.get(i-1,0)==0:
            ans=0
            break
        ans=ans*modular(d.get(i-1,0),d.get(i,0),mod)
        ans=ans%mod
    print(ans%mod)
t=int(input())
for _ in range(t):
    solution()