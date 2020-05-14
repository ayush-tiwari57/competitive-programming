n=int(input())
p=[True]*(n+1)
i=2
while i*i<=n:
    if p[i]:
        j=i*i
        while j<=n:
            p[j]=False
            j+=i
    i+=1
a=[]
for i in range(2,n+1):
    if p[i]:
        j=1
        while i**j<=n:
            a.append(i**j)
            j+=1
print(len(a))
print(*a)