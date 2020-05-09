import math
n=int(input())
a=1
while a*a<=n:
    if n%a<1==math.gcd(n//a,a):
        r=a
    a+=1
print(r,n//r)