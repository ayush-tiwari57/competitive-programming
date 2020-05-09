n=int(input())
l =list(map(int,input().split()))
r=0
x=0
for i in range(len(l)):
    if l[i]==0 or l[i]==x:
        r+=1
        x=0
    elif l[i]==3:
        if(x!=0):
            x=3-x
    else:
        x=l[i]
print(r)
    