n=int(input())
a=[0]+list(map(int,input().split()))+[1001]
c=0
ma=0
for i in range(0,n+1):
    if a[i+1]-a[i]==1:
        c+=1
    else:
        c=0
    ma=max(ma,c-1)
print(ma)