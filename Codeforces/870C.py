for _ in range(int(input())):
    n=int(input())
    if n==1 or n==2 or n==3 or n==5 or n==7 or n==11:
        print(-1)
    else:
        if n%2==0:
            print(n//4)
        else:
            print(n//4-1)