n = int(input())
m = 2*n + 1
res = set([(0, 0)])
for i in range(n):
    t, w = map(int, input().split())
    nxt = set()
    for a, b in res:
        if a + t <= m:
            nxt.add((a + t, b))
        if b + w <= m:
            nxt.add((a, b + w))
    res = nxt
print(min(t for t, w in res if t >= w))