"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""

def solution():
    n=int(input())
    s=input()
    cnt1=[0]*(n+1)
    cnt0=[0]*(n+1)
    balance=[0]
    for i in range(n):
        if s[i]=='1':
            cnt1[i+1]+=cnt1[i]+1
            cnt0[i+1]=cnt0[i]
        else:
            cnt1[i+1]=cnt1[i]
            cnt0[i+1]+=cnt0[i]+1
        x=cnt1[i+1]-cnt0[i+1]
        balance.append(x)
    d={}
    ans=0
    for i in range(n+1):
        if d.get(balance[i],-1)==-1:
            d[balance[i]]=i
        else:
            ans=max(ans,i-d[balance[i]])
    print(ans)
solution()