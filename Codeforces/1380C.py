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
        n,m=map(int,input().split())
        l=list(map(int,input().split()))
        l.sort()
        a=[]
        for i in range(n):
            x=m//l[i]
            if x*l[i]<m:
                x+=1
            a.append(x-1)
        cnt=0
        ans=0
        for i in range(n-1,-1,-1):
            if a[i]<=cnt:
                cnt=0
                ans+=1
            else:
                cnt+=1
        print(ans)
solution()