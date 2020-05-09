n=int(input())
l=list(map(int,input().split()))
l.sort()
x=n//2
if n%2==0:
    x-=1
print(l[x])