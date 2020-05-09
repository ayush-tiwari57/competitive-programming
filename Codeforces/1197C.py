n,k=map(int,input().split())
a=list(map(int,input().split()))
b=[0]*(n-1)
for i in range(n-1):
    b[i]=a[i+1]-a[i]
b.sort()
i=0
ans=0
while n!=k:
    ans+=b[i]
    i+=1
    n-=1
print(ans)