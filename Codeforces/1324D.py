n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
for i in range(n):
    a[i]-=b[i]
a=sorted(a)
i=0
j=n-1
ans=0
    
while i<j:
    while i<j and a[i]+a[j]<=0:
        i+=1
    if i<j:
        ans+=j-i
    j-=1
print(ans)