n,k=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
beg=0
end=10**10
while beg<=end:
    cnt=0
    mid=((beg+end)//2)
    x=mid
    flag=0
    for i in range(n):
        if a[i]*mid>b[i]:
            cnt+=(a[i]*mid-b[i])
            if cnt>k:
                flag=1
                break
    if flag!=1:
        beg=mid+1
    else:
        end=mid-1
print(beg-1)