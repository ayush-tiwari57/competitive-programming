n,k=map(int,input().split())
x=set(map(int,input().split()))
y=[]
s=c=0
for i in range(1,10000000000):
    if i in x:continue
    s+=i
    if s>k:break
    y.append(i)
print(len(y))
print(*y)