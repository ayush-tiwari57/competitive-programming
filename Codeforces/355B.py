c1,c2,c3,c4=map(int,input().split())
n,m=map(int,input().split())
b=list(map(int,input().split()))
t=list(map(int,input().split()))
a=0
for i in range(n):
    a+=min(c1*b[i],c2)
ans=min(a,c3)
b=0
for i in range(m):
    b+=min(c1*t[i],c2)
ans+=min(b,c3)
print(min(ans,c4))