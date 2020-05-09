n,m=map(int,input().split())
for i in range(m):
    x,y=map(int,input().split())
for i in range(n):
    if i%2!=0:
        print(1,end='')
    else:
        print(0,end='')