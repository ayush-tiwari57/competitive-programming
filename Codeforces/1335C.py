"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""

def solution():
    
    # This is the main code
    cnt=0
    n=int(input())
    a=[0]*(n+2)
    l=list(map(int,input().split()))
    x=len(set(l))
    if n==1:
        print(0)
        return
    for i in range(n):
        a[l[i]]+=1
    y=max(a)
    for i in range(1,len(a)):
        if a[i]>1:
            cnt+=1

    if y<x:
        print(y)
    elif x==y:
        print(x-1)
    else:
        print(x)
for _ in range(int(input())):
    solution()