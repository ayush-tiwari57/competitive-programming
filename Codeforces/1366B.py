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
        n,x,m=map(int,input().split())
        flag=0
        for i in range(m):
            l,r=map(int,input().split())
            if flag==0:
                if x>=l and x<=r:
                    flag=1
                    p=l
                    q=r
            else:
                if r>=p:
                    p=min(p,l)
                if l<=q:
                    q=max(q,r)
        if flag==0:
            print(1)
        else:
            print(q-p+1)
solution()