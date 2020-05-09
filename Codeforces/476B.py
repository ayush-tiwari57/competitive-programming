import math
a=list(input())
b=list(input())
p=a.count('+')-b.count('+')
m=a.count('-')-b.count('-')
if m<0 or p<0:
    print(0)
    exit(0)
l=math.factorial(p+m)/(math.factorial(p)*math.factorial(m))
print(l*(.5**(p+m)))