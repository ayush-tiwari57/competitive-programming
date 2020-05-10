from collections import Counter
for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    ans=0
    c=Counter(l)
    for i in range(n-1):
        s=l[i]
        for j in range(i+1,n):
            s+=l[j]
            if s in c:
                ans+=c[s]
                del(c[s])
    print(ans)
