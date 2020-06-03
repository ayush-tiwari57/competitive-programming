n,m=map(int,input().split())
if (2*m+1>n): print(-1)
else:
    print(n*m)
    for i in range(0,n):
        for j in range(1,m+1):
            print(i+1,(i+j)%n+1)