def prime(x,p):
    z=int(x**0.5)+1
    for i in range(2,z):
        if x%i==0 and i<=p:
            return False
    return True
p,y=map(int,input().split())
flag=0
while flag==0 and y>p:
    if prime(y,p):
        flag=1
        break
    y-=1
if flag==1:
    print(y)
else:
    print(-1)
