from math import gcd
n=int(input())
l=list(map(int,input().split()))
g=[1]*(n+1)
g[n]=l[n-1]
for i in range(n-1,-1,-1):
    g[i]=gcd(g[i+1],l[i])
# print(g)
ans=(g[1]*l[0])//gcd(l[0],g[1])
for i in range(n-1):
    ans=gcd(ans,(l[i]*g[i+1])//(gcd(l[i],g[i+1])))
print(ans)