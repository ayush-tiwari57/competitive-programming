import math
n,s=map(int,input().split())
lis=[]
for i in range(n):
    a,b,c=map(int,input().split())
    r=math.sqrt(a*a+b*b)
    lis.append([r,c])
lis.sort()
#print(lis)
for i in range(n):
    s+=lis[i][1]
    if s>=1000000:
        print(lis[i][0])
        exit()
print("-1")