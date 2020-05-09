n=int(input())
a=list(map(int,input().split()))
a.sort()
da=0;db=0
for i in range(1,(n//2)+1):
    da+=abs(a[i-1]-((2*i)-1))
    db+=abs(a[i-1]-(2*i))
print(min(da,db))