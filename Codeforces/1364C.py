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
    a=[0]*(10**6+1)
    for i in range(n):
        if l[i]>i+1:
            print(-1)
            return
        a[l[i]]=1
    x=[]
    for i in range(len(a)):
        if a[i]==0:
            x.append(i)
    j=1
    ans=[x[0]]
    for i in range(1,n):
        if l[i]==l[i-1]:
            ans.append(x[j])
            if j!=n-1:
                j+=1
        else:
            ans.append(l[i-1])
    print(*ans)

solution()