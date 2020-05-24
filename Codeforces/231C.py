n,k=map(int,input().split())
arr=sorted(list(map(int,input().split())))
l=0
s=0
ans=1
best=arr[0]
for i in range(1,n):
    s+=(i-l)*(arr[i]-arr[i-1])
    while s>k:
        s-=arr[i]-arr[l]
        l+=1
    if i-l+1>ans : 
        ans=i-l+1
        best=arr[i]
print(ans,best)