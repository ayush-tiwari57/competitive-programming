n,x,y=map(int,input().split())
l,r,u,d=0,0,0,0
for _ in range(n):
    j,k=map(int,input().split())
    if j<x:l+=1
    elif j>x:r+=1
    if k>y:u+=1
    elif k<y:d+=1
mx=max(l,r,u,d)
if l==mx:
    x-=1
elif r==mx:
    x+=1
elif u==mx:
    y+=1
else:
    y-=1
print(mx)
print(x,y)