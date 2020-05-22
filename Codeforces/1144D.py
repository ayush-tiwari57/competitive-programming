from collections import Counter
n=int(input())
l=list(map(int,input().split()))
c,f=Counter(l).most_common(1)[0]
a=int(l.index(c))
print(n-f)
for i in range(a-1,-1,-1):
    if l[i]!=c:
        print(1 if l[i]<c else 2,i+1,i+2)
for i in range(a+1,len(l)):
    if l[i]!=c:
        print(1 if l[i]<c else 2,i+1,i)