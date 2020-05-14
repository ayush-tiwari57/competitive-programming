n,a,b,k=map(int,input().split())
l=list(map(int,input().split()))
ans=[]
for i in range(n):
    l[i]%=(a+b)
    if l[i]==0:
        l[i]=(a+b)
    if l[i]<=a:
        ans.append(0)
    elif l[i]%a==0:
        x=l[i]//a-1
        ans.append(x)
    else:
        ans.append(l[i]//a)
ans.sort()
cnt=0
for i in range(n):
    if k<ans[i]:
        break
    k-=ans[i]
    cnt+=1
print(cnt)