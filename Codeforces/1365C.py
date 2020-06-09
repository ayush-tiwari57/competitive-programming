"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline
from collections import Counter
def solution():
        
    # This is the main code
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    l=[0]*(n+1)
    r=[0]*(n+1)
    da=[0]*(n+1)
    db=[0]*(n+1)
    ansl=[0]*1000000
    ansr=[0]*1000000
    for i in range(n):
        da[a[i]]=i+1
        db[b[i]]=i+1
    # print(da)
    # print(db)
    else:
        for i in range(1,n+1):
            # print(i,da[i],db[i])
            if da[i]>db[i]:
                x=da[i]-db[i]
                # print(i,x)
                l[i]=x
                y=n-da[i]+db[i]
                r[i]=y
            else:
                x=abs(da[i]-db[i])
                r[i]=x
                y=da[i]+n-db[i]
                # print(y)
                l[i]=y
            ansl[l[i]]+=1
            ansr[r[i]]+=1
            # ans[r[i]]+=1
        # print(l)
        print(max(max(ansl),max(ansr)))

solution()