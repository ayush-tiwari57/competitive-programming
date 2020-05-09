n,h,k=map(int,input().split())
t=0
x=0
for v in map(int,input().split()):
    t+=x//k
    x%=k
    if x+v>h:t,x=t+1,0
    x+=v
print(t+(x+k-1)//k)