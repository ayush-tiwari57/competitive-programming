"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    n,k=map(int,input().split())
    p=k
    s=list(input())
    t=''
    x=list(set(s))
    x.sort()
    d={}
    for i in range(len(x)):
        d[x[i]]=i
    if k>n:
        for i in range(n):
            t+=s[i]
        for i in range(n,k):
            t+=x[0]
    else:
        k-=1
        while s[k]==x[-1] and k>=0:
            k-=1 
        for i in range(k):
            t+=s[i]
        ind=d[s[k]]
        ind+=1
        t+=x[ind]
        for i in range(k+1,p):
            t+=x[0]
    print(t)

solution()