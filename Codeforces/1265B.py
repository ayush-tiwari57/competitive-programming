for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    d={}
    left=n
    right=0
    for i in range(n):
        d[l[i]]=i
    ans=''
    for i in range(1,n+1):
        left=min(left,d[i])
        right=max(right,d[i])
        if right-left+1==i:
            ans+='1'
        else:
            ans+='0'
    print(ans)