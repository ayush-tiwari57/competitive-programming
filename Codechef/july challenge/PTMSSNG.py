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
        n=int(input())
        cntx={}
        cnty={}
        for i in range(4*n-1):
            x,y=map(int,input().split())
            cntx[x]=cntx.get(x,0)+1
            cnty[y]=cnty.get(y,0)+1
        for i in cntx:
            if cntx[i]%2!=0:
                x=i
                break
        for i in cnty:
            if cnty[i]%2!=0:
                y=i
                break
        print(x,y)
solution()