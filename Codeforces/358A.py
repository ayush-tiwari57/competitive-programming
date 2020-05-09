n=int(input())
l=list(map(int,input().split()))
flag=0
for i in range(n):
    for j in range(i+1,n-1):
        a=l[i]
        b=l[i+1]
        c=l[j]
        d=l[j+1]

        if c>d:
            c,d=d,c
        if a>b:
            a,b=b,a
        if a<c<b<d or c<a<d<b:
            flag=1
            break

if flag==1:
    print('yes')
else:
    print('no')