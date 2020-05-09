n=int(input())
ans=0
l=[]
for i in range(n):
    x=int(input())
    l.append(x)
l.sort()
l1=l[::-1]
for i in range(n):
    ans+=l[i]*l1[i]
print(ans%10007)