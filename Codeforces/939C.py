n=int(input())
a=[int(x) for x in input().split()]
s,f=map(int,input().split())
a=a+a[:f-s]
z=s
l=f-s+1
sumi=sum(a[:f-s+1])
ans=sumi
for i in range(1,n+1):
    sumi=sumi-a[i-1]+a[i+f-s-1]
    if ans==sumi:
        z=min((s+n-1-i)%n,z)
    elif ans<sumi:
        ans=sumi
        z=(s+n-1-i)%n
print(z+1)