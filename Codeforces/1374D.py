"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        n,k=map(int,input().split())
        l=list(map(int,input().split()))
        d={}
        for i in range(n):
            x=k-l[i]%k
            if l[i]%k==0:
                continue
            d[x]=d.get(x,0)+1
        ans=0
        for i in d:
            ans=max(ans,i+k*(d[i]-1))
        if ans==0:
            print(0)
        else:
            print(ans+1)
solution()