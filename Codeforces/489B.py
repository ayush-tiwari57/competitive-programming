n=int(input())
b=list(map(int,input().split()))
m=int(input())
g=list(map(int,input().split()))
b.sort()
g.sort()
cnt=0
for i in range(n):
    j=0
    while j<len(g):
        if b[i]==g[j]:
            g.remove(b[i])
            cnt+=1
            break
        elif abs(b[i]-g[j])==1:
            g.remove(g[j])
            cnt+=1
            break
        else:
            j+=1
print(cnt)