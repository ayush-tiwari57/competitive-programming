n=int(input())
l=[1]
x=n*(n+1)//2
l.append(x)
for i in range(2,int(n**0.5)+1):
    if n%i==0:
        x=n//i
        s=(x*(2+(x-1)*i))//2
        l.append(s)
        s=(i*(2+(i-1)*x))//2
        l.append(s)
l=list(set(l))
l.sort()
print(*l)