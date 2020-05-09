 
n=int(input())
a=list(map(int,input().split(" ")))
 
from math import *
 
gc=0
 
for i in a:
	gc=gcd(gc,i)
 
i=1
 
c=0
 
while(i*i<=gc):
	if(i*i==gc):
		c+=1
	elif(gc%i==0):
		c+=2
	i+=1
 
print(c)