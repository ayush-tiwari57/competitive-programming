I=input
I()
x='.'+I()
z='L'
if x.count('R'):z='R'
a,b=x.find(z),x.rfind(z)
if z=='L':a,b=b,a-1
else:b+=1
print(a,b)