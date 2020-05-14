n=int(input())
d={}
l=list(map(int,input().split()))
for i in range(n):
    x=int(l[i]**0.5)+1
    for j in range(2,x):
        if l[i]%j==0:
            d[j]=d.get(j,0)+1
        while l[i]%j==0:
            l[i]//=j
    if l[i]>1:
        d[l[i]]=d.get(l[i],0)+1
# print(d)
if d=={}:
    print(1)
    exit(0)
print(max(1,max(d.values())))