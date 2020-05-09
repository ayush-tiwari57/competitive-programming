n,k=map(int,input().split())
l=list(map(int,input().split()))
l.sort()
x=min(l[0],l[n]/2)
ans=x*n+2*x*n
print(min(ans,k))