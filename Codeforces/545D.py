n=int(input())
l=list(map(int,input().split()))
l.sort()
sum=cnt=0
for i in range(n):
    if sum<=l[i]:
        sum+=l[i]
        cnt+=1
print(cnt)
