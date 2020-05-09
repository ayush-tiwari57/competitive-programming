for _ in range(int(input())):
    n,m=map(int,input().split())
    a=[0]*51
    b=[0]*51
    ans=100000
    f=list(map(int,input().split()))
    p=list(map(int,input().split()))
    for i in range(n):
        a[f[i]]+=p[i]
        b[f[i]]=1
    for i in range(51):
        if b[i]!=0 and a[i]<ans:
            ans=a[i]
    print(ans)
    