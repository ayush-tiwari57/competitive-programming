for i in range(int(input())):
    a,b,c=map(int,input().split())
    print(min((a+b+c)//3,min(a,b)))