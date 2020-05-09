import math
n = int(input())
x = n
for i in range(2, int(n**0.5)+1):
    if n%i==0:
        x = math.gcd(x, i)
        x = math.gcd(x,int(n/i))
print(x)