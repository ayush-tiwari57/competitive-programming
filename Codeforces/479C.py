n=int(input())
a=[]
for i in range(n):
    x,y=map(int,input().split())
    a.append([x,y])
a.sort()
ans=min(a[0][1],a[0][0])
for i in range(1,n):
    if a[i][1]>=ans:
        ans=a[i][1]
    else:
        ans=a[i][0]
print(ans)