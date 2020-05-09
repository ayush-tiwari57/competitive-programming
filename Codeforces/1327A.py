for _ in range(int(input())):
    n,k=map(int,input().split())
    x=int(n**0.5)
    if n%2==0:
        if k%2==0 and k<=x:
            print('YES')
        else:
            print('NO')
    else:
        if k%2!=0 and k<=x:
            print('YES')
        else:
            print('NO')