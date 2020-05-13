n,m,d=map(int,input().split())
a=[]
for i in range(n):
    x=list(map(int,input().split()))
    for j in x:
        a.append(j)
a.sort()
x=a[len(a)//2]
ans=0
for i in range(len(a)):
    a[i]=abs(a[i]-x)
    if a[i]%d!=0:
        print(-1)
        exit(0)
    else:
        ans+=a[i]//d
# print(a)
print(ans)
