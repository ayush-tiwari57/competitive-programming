n,d=map(int,input().split())
l=[]
for i in range(n):
    x,y=map(int,input().split())
    l.append([x,y])
l.sort()

ans=0
a=[]
i=0
j=0

while i<n:
    if l[i][0]-l[j][0]>=d:
        a.append(ans)
        ans-=l[j][1]
        j+=1
    else:
        ans+=l[i][1]
        a.append(ans)
        i+=1
print(max(a))