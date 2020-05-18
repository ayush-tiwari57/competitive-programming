"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    a,b,c,d=map(int,input().split())
    ans=[0]*1000002
    for i in range(a,b+1):
        ans[i+b]+=1
        ans[i+c+1]-=1
    for i in range(1,1000002):
        ans[i]+=ans[i-1]
    for i in range(1000000,-1,-1):
        ans[i]+=ans[i+1]
    sol=0
    for i in range(c,d+1):
        sol+=ans[i+1]
    print(sol)
solution()