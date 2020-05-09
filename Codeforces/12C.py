from collections import Counter
n,m=map(int,input().split())
l=list(map(int,input().split()))
l.sort()
cnt=Counter()
for i in range(m):
    cnt[input()]+=1
a=sorted(cnt.values())
a.reverse()
mi=0
mx=0
for i in range(len(a)):
    mi+=a[i]*l[i]
l.reverse()
for i in range(len(a)):
    mx+=a[i]*l[i]
print(mi,mx)