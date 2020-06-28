"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    m=10**9+7
    t,k=map(int,input().split())
    a=[1]*(10**5+2)
    for i in range(k,len(a)):
        a[i]=(a[i-1]+a[i-k])%m
    for i in range(1,len(a)):
        a[i]=(a[i]+a[i-1])%m
    # print(a)
    for _ in range(t):
        x,y=map(int,input().split())
        print((a[y]-a[x-1])%m)


solution()