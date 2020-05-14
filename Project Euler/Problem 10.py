s=0
x=1999999
p=[True]*x
i=2
while i*i<x:
    if p[i]:
        j=i*i
        while j<x:
            p[j]=False
            j+=i
    i+=1
for i in range(2,x):
    if p[i]:
        s+=i
print(s)