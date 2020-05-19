n=int(input())
l=list(map(int,input().split()))
l.sort()
s=sum(l)
ans=s
for i in range(1,n):
    j=1
    while j<=l[i]:
        x=s 
        if l[i]%j==0:
            x=x+(l[i]//j)-l[i]
            x=x-l[0]+(l[0]*(j))
            # print(j,l[i],x)
        j+=1
        ans=min(ans,x)
print(ans)