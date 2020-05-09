l=list(map(int,input().split()))
x1=l[0]
x2=l[2]
y1=l[1]
y2=l[3]
if x1 != x2 and y1 != y2 and abs(x1 - x2) != abs(y1 - y2):
    print('-1')
elif (x1 == x2):
    print(x1 + abs(y1 - y2),y1,x2 + abs(y1 - y2),y2,sep=' ')
elif(y1 == y2):
    print(x1,y1 + abs(x1 - x2),x2,y2 + abs(x1 - x2),sep=' ')
else:
    print(x1,y2,x2,y1,sep=' ')

