n,m,x,y=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
i=0
j=0
ans=[]
cnt=0
while i<n and j<m:
    if b[j]>=a[i]-x and b[j]<=a[i]+y:
        cnt+=1
        ans.append((i+1,j+1))
        i+=1
        j+=1
    elif b[j]<a[i]-x:
        j+=1
    else:
        i+=1
print(cnt)
for i in range(cnt):
    print(ans[i][0],ans[i][1])