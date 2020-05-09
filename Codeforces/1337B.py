for _ in range(int(input())):
    x,n,m=map(int,input().split())
    while (x//2)+10 <x and n!=0:
        x=x//2+10
        n-=1
    if x>m*10:
        print('NO')
    else:
        print("YES")