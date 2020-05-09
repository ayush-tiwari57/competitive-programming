n,a,b=map(int,input().split())
l=list(map(int,input().split()))
ans=0
c=0
for i in range(n):
    if l[i]==2:
        if b==0:
            ans+=2
        else:
            b-=1
    else:
        if a!=0:
            a-=1
        elif b!=0:
            b-=1
            c+=1
        elif c!=0:
            c-=1
        else:
            ans+=1
print(ans)