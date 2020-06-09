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
        l=[]
        x=[]
        for i in range(n):
            s=list(map(int,input().split()))
            l.append(s)
            if s.count(0)==m:
                x.append(i)
        ans=0
        for i in range(n):
            for j in range(m):
                cnt=0
                if l[i][j]==0:
                    if l[i].count(0)==m:
                        for k in range(n):
                            if l[k][j]==0:
                                cnt+=1
                        if cnt==n:
                            ans+=1
                            l[i][j]=1
        if ans%2==0:
            print('Vivek')
        else:
            print('Ashish')
solution()