n,x0,y0=map(int,input().split())
xs=ys=0
l=[]
for i in range(n):
    x,y=map(int,input().split())
    if x0==x:
        xs=1
    elif y0==y:
        ys=1
    else:
        m=(y-y0)/(x-x0)
        l.append(m)
print(len(set(l))+xs+ys)