n = int(input())
s = 0
a = [-1]
m = set()
tmp = list(map(int, input().split()))
for i in range(n):
    j = tmp[i]
    s += j
    if j < 0 and -j not in m or j in m:
        print('-1')
        exit()
    m.add(j)
    if not s:
        m = set()
        a.append(i)
if a[-1] != n - 1:
    print(-1)
else:
    print(len(a) - 1)
    print(*[a[i + 1] - a[i] for i in range(len(a) - 1)])