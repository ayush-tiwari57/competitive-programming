r,x,y,x2,y2=map(int,input().split())
l=((x-x2)**2+(y-y2)**2)**0.5
print(-int(-l//(2*r)))