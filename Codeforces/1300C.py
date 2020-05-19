"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    n=int(input())
    l=list(map(int,input().split()))
    nl=[]
    pre=[~l[0]]
    suff=[]
    for i in range(n):
        x=~l[i]
        # print(x)
        nl.append(x)
        pre.append(x)
        suff.append(x)
    suff.append(~l[-1])
    for i in range(1,n+1):
        pre[i]&=pre[i-1]
    for i in range(n-1,-1,-1):
        suff[i]&=suff[i+1]
    # print(suff)
    # print(pre)
    m=-1
    for i in range(n):
        if i==0:
            x=l[i]&suff[i+1]
        elif i==n-1:
            x=l[i]&pre[i]
        else:
            x=l[i]&suff[i+1]&pre[i]
        if x>m:
            m=x
            j=i
    l[0],l[j]=l[j],l[0]
    print(*l)
solution()
# print(0&~179952043)