"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    from decimal import Decimal
    n=int(input())
    a=list(map(Decimal,input().split()))
    b=list(map(Decimal,input().split()))
    d={}
    cnt=0
    m=0
    for i in range(n):
        if a[i]==0:
            if b[i]==0:
                cnt+=1
            continue
        else:
            x=b[i]/a[i]
            # print(x)
            d[x]=d.get(x,0)+1
            m=max(m,d.get(x,0))
    print(cnt+m)


solution()