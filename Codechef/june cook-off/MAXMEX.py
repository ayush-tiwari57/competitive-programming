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
        cntm=0
        cntg=0
        check=0
        d={}
        for i in range(n):
            if l[i]<m:
                cntm+=1
                if d.get(l[i],0)==0:
                    d[l[i]]=1
                    check+=1 
            elif l[i]>m:
                cntg+=1
        if check!=m-1:
            print(-1)
        else:
            print(cntm+cntg)


solution()