n,k=map(int,input().split())
l=list(map(int,input().split()))
m=0
for i in range(n):
    s=0
    for j in range(i,n):
        s+=l[j]
        if j-i+1>=k:
            m=max(m,s/(j-i+1))
print(m)