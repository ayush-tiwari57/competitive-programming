import math
n=int(input())
l=list(map(int,input().split()))
a=[l[0]]
cnt=0
for i in range(1,n):
    if math.gcd(l[i-1],l[i])==1:
        a.append(l[i])
    else:
        a.append(1)
        cnt+=1
        a.append(l[i])
print(cnt)
print(*a)