n=int(input())
l1=list(map(int,input().split()))
nw=int(input())
l2=list(map(int,input().split()))
for i in range(1,n):
    l1[i]+=l1[i-1]
for i in range(nw):
    beg=0
    end=n-1
    while beg<=end:
        mid=(beg+end)//2
        if l2[i]<=l1[mid]:
            if mid==0:
                print(mid+1)
                break
            elif l2[i]>l1[mid-1]:
                print(mid+1)
                break
            else:
                end=mid-1
        else:
            beg=mid+1