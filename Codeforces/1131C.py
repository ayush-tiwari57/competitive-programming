n=int(input())
a=[0]*n
l=list(map(int,input().split()))
l.sort()
flag=i=k=0
j=n-1
while(i<n):
    if flag==0:
        a[k]=l[i]
        k+=1
        flag=1
    else:
        a[j]=l[i]
        j-=1    
        flag=0
    i+=1
for i in range(n):
    print(a[i],end=' ')