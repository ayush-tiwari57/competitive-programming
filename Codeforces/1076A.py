n=int(input())
l=list(input())
ans=''
flag=0
for i in range(n-1):
    if l[i]>l[i+1] and flag==0:
        flag=1
    else:
        ans+=l[i]
if len(ans)!=n-1:
    ans+=l[n-1]
print(ans)