n,k=map(int,input().split())
l=list(map(int,input().split()))
cnt=1
m=max(l[1],l[0])
for i in range(2,n):
    if cnt==k:
        break
    if l[i]>m:
        m=l[i]
        cnt=1
    else:
        cnt+=1
print(m)


