n = int(input())
l = [int(i) for i in input().split()]
l.sort()
ans = 1
for i in range(n):
    if l[i] < i//ans:
        ans+=1
print(ans)