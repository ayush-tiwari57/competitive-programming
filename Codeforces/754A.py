n=int(input())
l=list(map(int,input().split()))
x=l.count(0)
if x==n:
    print('NO')
else:
    if sum(l)!=0:
        print('YES')
        print(1)
        print(1,n)
    else:
        ans=0
        print('YES')
        for i in range(n):
            ans+=l[i]
            if ans!=0:
                break
        print(2)
        print(1,i+1)
        print(i+2,n)