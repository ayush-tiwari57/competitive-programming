n,v=map(int,input().split())
d=[0]*(3003)
a=[]
j=0
for i in range(n):
    a,b=map(int,input().split())
    d[a]+=b
ans=0
x=0
for i in range(1,3002):
    if d[i]+x<v:
        ans+=d[i]+x
        x=0
    else:
        t=max(v-x,0)
        x=d[i]-t
        ans+=v


        
print(ans)