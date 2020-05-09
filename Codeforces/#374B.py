n,k=map(int,input().split())
worst=best=w=b=0
l=[]
a=[0]*101
for i in range(n):
    s=input()
    l.append(s)
x=input()
for i in range(n):
    h=len(l[i])
    a[h]+=1
h=len(x)
for i in range(h+1):
    w+=a[i]
for i in range(h):
    b+=a[i]
worst=w+(((w-1)//k)*5)
best=b+(((b)//k)*5)
print(best+1,worst,sep=' ')