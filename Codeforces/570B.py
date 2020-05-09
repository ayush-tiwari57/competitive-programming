n,m=map(int,input().split())
if m==1:
    if n-m>=m:
        print(2)
    else:
        print(1)
elif n-m>=m:
    print(m+1)
else:
    print(m-1)