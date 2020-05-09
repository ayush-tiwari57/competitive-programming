n=int(input())
l=list(map(int,input().split()))
ans=0
t=0
x=1
y=1
ans=2
for i in range(1,n):
    if l[i]==l[i-1]:
        x+=1
        y+=1
    elif l[i]>l[i-1]:
        y=x+1
        x=1
    else:
        x=y+1
        y=1
    ans=max(ans,max(x,y))
    
print(ans)