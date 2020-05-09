n,m=map(int,input().split())
a=list(map(int,input().split()))
s=sum(a)
k=min(a)
if s<m:
    print(-1)
else:
    p=s-m
    print(min(k,p//n))