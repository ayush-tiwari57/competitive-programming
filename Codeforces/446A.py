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
    end=[1]*(n+1)
    start=[1]*(n+1)
    for i in range(1,n):
        if l[i]>l[i-1]:
            end[i]+=end[i-1]
    for i in range(n-2,-1,-1):
        if l[i]<l[i+1]:
            start[i]+=start[i+1]  
    # print(end)
    # print(start)
    ans=max(end)
    if ans<n:
        ans+=1
    for i in range(1,n-1):
        if l[i-1]+1<l[i+1]:
            ans=max(ans,end[i-1]+start[i+1]+1)
    print(ans)


solution()