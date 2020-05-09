n=int(input())
l=list(map(int,input().split()))
l1=list(map(int,input().split()))
ans=[]
j=1
while j<n-1:
    m1=m2=2e9
    i=j-1
    k=j+1
    while i>=0:
        if l[i]<l[j]:
            m1=min(m1,l1[i])
        i-=1
    while k<n:
        if l[k]>l[j]:
            m2=min(m2,l1[k])
        k+=1
    x=m1+m2+l1[j]
    ans.append(x)
    j+=1
a=min(ans)
if a>=2e9:
    print(-1)
else:
    print(a)
