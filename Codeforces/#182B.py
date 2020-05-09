n,m=map(int,input().split())
l=[]
x=0
for i in range(n):
    c,t=map(int,input().split())
    x+=c*t
    l.append(x)
l1=list(map(int,input().split()))

ans=[]

for i in range(m):
    beg=0
    end=n-1
    while beg<=end:
        mid=(end+beg)//2
        j=mid-1
        if l1[i]<=l[mid]:
            if mid==0:
                ans.append(mid+1)
                break
            elif l1[i]>l[mid-1]:
                ans.append(mid+1)
                break
            else:
                end=mid-1
        else:
            beg=mid+1
for i in range(m):
    print(ans[i])