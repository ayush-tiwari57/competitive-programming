n,k=map(int,input().split())
a=list(map(int,input().split()))
d=n-k
m=0
for i in range(d):
    m=max(m,a[i]+a[2*d-i-1])
print(max(m,a[-1]))