a=input()
b=0
c=0
for i in range(len(a)-4):
    if a[i:i+5]=='heavy':b+=1
    if a[i:i+5]=='metal':c+=b
print(c)