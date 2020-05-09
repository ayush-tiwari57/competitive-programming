n,m=map(int,input().split())
cnt=0
if n==1 and m==1:
    print(0)
else:
    while n!=0 and m!=0:
        if n==1 and m==1:
            break
        if min(n,m)==n:
            cnt+=1
            n-=1
            m-=2
        else:
            cnt+=1
            n-=2
            m-=1
    print(cnt)