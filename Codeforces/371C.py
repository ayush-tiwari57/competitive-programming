"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    s=input()
    nb,ns,nc=map(int,input().split())
    pb,ps,pc=map(int,input().split())
    p=int(input())
    l=0
    r=10**14
    B=0
    S=0
    C=0
    for i in range(len(s)):
        # print(s[i])
        if s[i]=="B":
            B+=1
        elif s[i]=="C":
            C+=1
        else:
            S+=1
    # print(B,S,C)
    while l<r-1:
        m=(l+r)//2
        rp=max(0,B*m-nb)*pb+max(0,S*m-ns)*ps+max(0,C*m-nc)*pc
        # print(m,rp)
        if rp<=p:
            l=m
        else:
            r=m
    print(l)

solution()