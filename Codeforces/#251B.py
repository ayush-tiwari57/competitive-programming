n,x=map(int,input().split())
l=list(map(int,input().split()))
l.sort()
ans=0
for i in range(n):
    ans+=l[i]*x
    if x!=1:
        x-=1
print(ans)