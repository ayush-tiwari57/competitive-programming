n=int(input())
d={}
m=0
a=[]
for i in range(n):
    x,y=input().split()
    a.append([x,y])
    y=int(y)
    d[x]=d.get(x,0)+y
m=max(d.values())  
f={}
for i in range(n):
   x=a[i][0]
   y=int(a[i][1])
   f[x]=f.get(x,0)+y
   if d[x]==m and f[x]>=m:
       print(x)
       exit(0) 