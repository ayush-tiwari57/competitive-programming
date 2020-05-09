n=int(input())
l=list(map(int,input().split()))
ans=0
ma=-2e9
mi=2e9
for i in range(n):
    if l[i]>0:
        ans+=l[i]
        if l[i]%2!=0:
            mi=min(mi,l[i])
    else:
        if l[i]%2!=0:
            ma=max(ma,l[i])
if ans%2!=0:
    print(ans)
else:
    print(ans-min(mi,-ma))