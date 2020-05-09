x,y=map(int,input().split())
n=int(input())
m=1000000007
l=[x,y]
for i in range(2,6):
    z=l[i-1]-l[i-2]
    l.append(z)
print(l[(n%6)-1]%m)