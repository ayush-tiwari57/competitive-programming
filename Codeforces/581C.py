n, k = (int(x) for x in input().split())
a = [int(x) for x in input().split()]
a.sort(key=lambda x: -(x % 10))
for i in range(n):
    if a[i] % 10 == 0:
        break
    add = min(k, 10 - a[i] % 10)
    a[i] += add
    k -= add
for i in range(n):
    add = min(k, 100 - a[i])
    a[i] += add
    k -= add
print(sum(x // 10 for x in a))