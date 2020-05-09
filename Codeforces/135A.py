n=int(input())
l=list(map(int,input().split()))
l.sort()
if l[n-1]==1:
    l[n-1]=2
else:
    l[n-1]=1
l.sort()
print(*l)