n,k=map(int,input().split())
l = list(map(int,input().split()))
c=0
r = 0
for i in range(n):
    x = l[i]+r
    if x==0:
        continue
    elif x<k and r>0:
        c+=1
        r=0
    else:
        c+=(x//k)
        r=(x%k)
if r>0:
    c+=1
print(c)