n=int(input())
l=list(map(int,input().split()))
x,y=map(int,input().split())
a=-1
b1=0
s=sum(l)
for i in range(n):
    b1+=l[i]
    b2=s-b1
    if b2>=x and b2<=y and b1>=x and b1<=y:
        a=i+1
        break    
print(a+1)