n,m=map(int,input().split())
l=list(map(int,input().split()))
ans=[]
while m!=0:
    mx=l.index(max(l))
    mi=l.index(min(l))
    if mi!=mx:
        l[mi]+=1
        l[mx]-=1
        ans.append((mx+1,mi+1))
    m-=1
print(max(l)-min(l),len(ans))
for i in range(len(ans)):
    print(ans[i][0],ans[i][1])
        

