n=int(input())
l=list(map(int,input().split()))
b=[0]
z=0
x=-1
a={}   
cnt=0
for i in range(n):
    z+=l[i]
    b.append(z)
for i in range(len(b)):
    if b[i] in a:
        x=max(x,a[b[i]])
    cnt+=i-x-1
    a[b[i]]=i
print(cnt)