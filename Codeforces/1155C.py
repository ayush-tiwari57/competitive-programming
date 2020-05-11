from math import gcd
n,m=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
z=[]

g=0
for i in range(1,n):
    g=gcd(g,a[i]-a[0])
for i in range(m):
    if g%b[i]==0:
        print('YES')
        print(a[0],i+1)
        exit(0)
print('NO')