n,k=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
d={}
l=[]
for i in range(n):
    x=a[i]
    y=b[i]
    l.append((x,y))
l.sort()
ans=[]
j=0
if k==0:
    print(*b)
else:
    for i in range(n):
        if i<k:
            ans.append(l[i][1])
            ans.sort()
            d[l[i][0]]=sum(ans)
        else:
            d[l[i][0]]=sum(ans)+l[i][1]
            if min(ans)<l[i][1]:
                ind=ans.index(min(ans))
                ans[ind]=l[i][1]
    for i in range(n):
        print(d[a[i]],end=' ')

