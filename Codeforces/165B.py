n,k=map(int,input().split())
l=1
r=n
while(l<r):
    sum=0
    x=v=(l+r)//2
    while(x>0):
        sum+=x
        x//=k
    if sum>=n:
        r=v
    else:
        l=v+1
print(r)
