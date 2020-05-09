for _ in range(int(input())):
    a,b=map(int,input().split())
    x=a//b
    if a%b==0:
        print(0)
    else:
        print((b*(x+1))-a)