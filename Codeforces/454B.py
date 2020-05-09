n=int(input())
l=list(map(int,input().split()))
c=0
ans=0
for i in range(1,n):
    if(l[i]<l[i-1]):
        c+=1
        ans=n-i
if(c==1 and l[0]>=l[-1])or c==0 :
    print(ans)
else:
    print(-1) 