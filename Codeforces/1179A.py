n,q=map(int,input().split())
a=list(map(int,input().split()))
ans=list()
mx=max(a)
i=0
while a[i]!=mx:
    i+=1
    ans.append([a[i-1],a[i]])
    mn=min(a[i],a[i-1])
    mxx=max(a[i],a[i-1])
    a.append(mn)
    a[i]=mxx
nn=i+1
for j in range(q):
    mj=int(input())
    if mj>=nn:
        print(mx,a[nn+(mj-nn)%(n-1)])
    else:
        print(ans[mj-1][0],ans[mj-1][1])