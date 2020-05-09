for _ in range(int(input())):
    a,b,c,d=map(int,input().split())
    x,y,x1,y1,x2,y2=map(int,input().split())
    x+=b-a
    y+=d-c
    if(x1<=x and x<=x2 and y1<=y and y<=y2):
        if ((x1==x2 and a!=0) or (y1==y2 and c!=0)):
            print('NO')
        else:
            print('YES')
    else:
        print('NO')
