n=int(input())
cnt=0
m=0
l=list(map(int,input().split()))
for i in range(n):
    m=max(m,l[i])
    if l[i]==i+1 and m==l[i]:
        cnt+=1
print(cnt)