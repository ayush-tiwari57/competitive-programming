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
        l=list(map(int,input().split()))
        ecnt=0
        for i in range(0,n,2):
            ecnt+=l[i]
        pre1=[0]*(n)
        pre2=[0]*(n)
        for i in range(1,n,2):
            pre1[i]=l[i]-l[i-1]
            if i<n-1:
                pre2[i]=l[i]-l[i+1]
        # print(pre1)
        # print(pre2)
        pre1x=pre2x=pre1y=pre2y=0
        for i in range(n):
            pre1x+=pre1[i]
            pre2x+=pre2[i]
            if pre1x<0:
                pre1x=0
            if pre2x<0:
                pre2x=0
            if pre1x>pre1y:
                pre1y=pre1x
            if pre2x>pre2y:
                pre2y=pre2x
        print(ecnt+max(0,pre1y,pre2y))

solution()