for i in range(int(input())):
    n,k = map(int,input().split())
    print(k+int((k-1)//(n-1)))