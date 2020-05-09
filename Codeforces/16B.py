n,m=map(int,input().split())
l=[]
for i in range(m):
    a,b=map(int,input().split())
    l.append((a,b))
l.sort(key=lambda x: x[1],reverse=True)
ans=0
for i in range(m):
    if n==0:
        break
    x=min(l[i][0],n)
    ans+=x*l[i][1]
    n-=x
print(ans)