n=int(input())
l=list(map(int,input().split()))
cnt=0
ans=0
for i in range(1,n):
    if l[i]+cnt<l[i-1]:
        ans+=abs(l[i]+cnt-l[i-1])
        cnt+=ans
    l[i]+=cnt
print(ans)


