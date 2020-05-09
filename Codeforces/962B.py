n,x,y=map(int,input().split())
a=list(map(len,input().split('*')))
t=x+y
for i in a:
    if x>y:
        x,y=y,x
    x-=min(i//2,x)
    y-=min(i-i//2,y)
print(t-x-y)