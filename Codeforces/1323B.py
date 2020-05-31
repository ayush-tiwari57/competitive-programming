"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n,m,k=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a.append(0)
    b.append(0)
    d1={}
    d2={}
    l=0
    for i in range(n):
        if a[i]==1:
            l+=1
        if a[i]==0:
            l=0
        if a[i]==1 and a[i+1]==0:
            d1[l]=d1.get(l,0)+1
    l=0
    for i in range(m):
        if b[i]==1:
            l+=1
        if b[i]==0:
            l=0
        if b[i]==1 and b[i+1]==0:
            d2[l]=d2.get(l,0)+1
    ans=0
    for i in range(1,int(k**0.5)+1):
        cnt1=cnt2=cnt3=cnt4=0
        if k%i==0:
            j=k//i
            for z in d1.keys():
                if z>=i:
                    cnt1+=(z-i+1)*(d1[z])
                if z>=j and i!=j:
                    cnt2+=(z-j+1)*(d1[z])
            for z in d2.keys():
                if z>=j:
                    cnt3+=(z-j+1)*(d2[z])
                if z>=i and i!=j:
                    cnt4+=(z-i+1)*(d2[z])
            ans+=(cnt1*cnt3)+(cnt2*cnt4)           
    print(ans)
solution()