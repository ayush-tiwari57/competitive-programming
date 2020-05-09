n=int(input())
l=list(map(int,input().split()))
ans=-1
for i in range(n-1):
    if l[i]>l[i+1]:
        ans=i
print(ans+1)