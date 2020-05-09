n=int(input())
l=list(map(int,input().split()))
l1=list(map(int,input().split()))
i=c=0
a=[0]*5
while i<n:
    c+=l[i]
    for j in range(4,-1,-1):
        if c>=l1[j]:
            a[j]=a[j]+(c//l1[j])
            c%=l1[j]
            
    i+=1
for i in range(5):
    print(a[i],end=' ')
print()
print(c)