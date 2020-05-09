n=int(input())
l=list(map(int,input().split()))
cnt=0
j=l[n-1]-1
for i in range(n-2,-1,-1):
    j=max(j,l[i])
    l[i]=j
    j-=1
for i in range(1,n):
    if l[i]==0:
        cnt+=1
print(cnt+1)