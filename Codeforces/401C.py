n, m=map(int, input().split())
if n-1<=m<=2*(n+1):
    m-=n-1
    if m==0:
        s="0"+"10"*(n-1)
    elif m-1<=n:
        s="110"*(m-1)+"10"*(n-m+1)
    else:
        s="110"*n+"1"*(m-1-n)
    print(s)
else:
    print(-1)