"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n=int(input())
    p=list(map(int,input().split()))
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    f=[0]*n
    m=int(input())
    c=list(map(int,input().split()))
    l=[[],[],[],[]]
    for i in range(n):
        l[a[i]]+=[[p[i],i]]
        if b[i]!=a[i]:
            l[b[i]]+=[[p[i],i]]
    for i in range(1,4):
        l[i]=sorted(l[i])
    i=[0,0,0,0]
    ans=[]
    for x in c:
        while i[x]<len(l[x]) and f[l[x][i[x]][1]]:
            i[x]+=1
        if i[x]>=len(l[x]): ans+=[-1]
        else: ans+=[l[x][i[x]][0]]; f[l[x][i[x]][1]]=1
    print(*ans)


solution()