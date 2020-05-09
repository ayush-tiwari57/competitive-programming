a,b,c=map(int,input().split())
n=int(input())
u=[]
p=[]
ans=0
if n==0:
    print(0,0)
else:    
    for i in range(n):
        x,y=map(str,input().split())
        x=int(x)
        if y=='USB':
            u.append(x)
        else:
            p.append(x)
    u.sort()
    p.sort()
    l=min(a,len(u))
    for i in range(l):
        ans+=u[i]
    m=min(b,len(p))
    for i in range(m):
        ans+=p[i]
        x=i
    uv=u[l:]+p[m:]
    uv.sort()

    n=min(c,len(uv))
    for i in range(n):
        ans+=uv[i]
    print(l+m+n,ans)
