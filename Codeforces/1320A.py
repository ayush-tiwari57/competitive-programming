from collections import Counter
n=int(input())
l=list(map(int,input().split()))
c=Counter()
for i in range(n):
    x=i-l[i]
    c[x]+=l[i]
print(max(c.values()))