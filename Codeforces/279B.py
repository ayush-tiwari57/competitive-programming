n,t=map(int,input().split())
l=list(map(int,input().split()))
a=j=0
for i in range(n):
    a+=l[i]
    if a>t:
        a-=l[j]
        j+=1
print(n-j)