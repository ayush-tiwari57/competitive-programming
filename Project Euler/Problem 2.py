x=1
y=2
s=0
while x<=4000000:
    if x%2==0:
        s+=x
    x,y=y,x+y
print(s)