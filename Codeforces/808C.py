"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n,w=map(int,input().split())
    l=list(map(int,input().split()))
    a=[]
    z=[0]*n
    ans=0
    for i in range(n):
        if l[i]%2==0:
            ans+=l[i]//2
            a.append([l[i],l[i]//2,i])
        else:
            ans+=l[i]//2+1
            a.append([l[i],l[i]//2+1,i])
    if ans>w:
        print(-1)
        exit(0)
    x=w-ans
    a.sort(reverse=True)
    i=0
    while x>0 and i<n:
        d=a[i][0]-a[i][1]
        if x<=d:
            a[i][1]+=x
            x=0
        else:
            a[i][1]=a[i][0]
            x-=d
        i+=1
    a.sort(key=lambda x: x[2])
    for i in range(n):
        print(a[i][1],end=" ")
solution()