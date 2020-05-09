n,m=map(int,input().split())
l1=list(map(int,input().split()))
l2=list(map(int,input().split()))
for i in range(1,n):
    l1[i]+=l1[i-1]
for i in range(m):
    beg=0
    last=n-1
    while beg<=last:
        mid=(beg+last)//2
        if l2[i]<=l1[mid]:
            if mid==0:
                print(mid+1,l2[i])
                break
            elif l2[i]>l1[mid-1]:
                print(mid+1,l2[i]-l1[mid-1])
                break
            else:
                last=mid-1
        else:
            beg=mid+1
