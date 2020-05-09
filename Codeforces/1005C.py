from collections import Counter
n=int(input())
a=Counter(list(map(int,input().split())))
b=[2**i for i in range(1,31)]
ans=0
for i in a:
    flag=True
    for j in b:
        if a.get(j-i):
            flag=False
            if j-i==i and a[i]==1:
                flag=True
            else:
                break
    if flag:
        ans+=a[i]
print(ans)