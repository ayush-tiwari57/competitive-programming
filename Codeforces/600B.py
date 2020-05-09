n,m=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
a.sort()
ans=[0]*m
for i in range(m):
    beg=0
    end=n-1
    while(beg<=end):
        mid=(beg+end)//2
        if mid==n-1 and b[i]>=a[mid]:
            ans[i]=mid+1
            break
        elif b[i]>=a[mid]:
            if b[i]>=a[mid+1]:
                beg=mid+1
            else:
                ans[i]=(mid+1)
                break
        else:
            end=mid-1
for i in range(m):
    print(ans[i],end=' ')