n=int(input())
a=b=0
ans=1
for i in range(n):
    x,y=map(int,input().split())
    z=(min(x,y)-max(a,b))
    if a!=b:
        z+=1
    ans+=max(0,z)
    a,b=x,y
print(ans)