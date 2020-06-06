"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n=int(input())
    l=list(map(int,input().split()))
    color=[0]*1000000
    f=[0]*1000000
    m=0
    ans=0
    for i in range(n):
        flag=0
        f[color[l[i]]]-=1
        color[l[i]]+=1
        f[color[l[i]]]+=1
        m=max(m,color[l[i]])
        if f[1]==i+1:
            flag=1
        elif f[i+1]==1:
            flag=1
        elif f[1]==1 and f[m]*m==i:
            flag=1
        elif f[m]==1 and f[m-1]*(m-1)==i-m+1:
            flag=1
        if flag==1:
            ans=i+1
    print(ans)
solution()