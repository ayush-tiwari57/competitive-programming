s=0
for i in range(1,1000):
    if i%3==0:
        s+=i
    if i%5==0:
        s+=i
    if i%15==0:
        s-=i
print(s)