for _ in range(int(input())):
    a,b=map(int,input().split())
    if a>b:
        x=a-b
        if x%2==0:
            print(1)
        else:
            print(2)
    elif a==b:
        print(0)
    else:
        x=b-a
        if x%2!=0:
            print(1)
        else:
            print(2)