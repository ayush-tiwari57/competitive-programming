R = lambda: map(int, input().split())
n, k = R()
a = list(R())
print(sum(min(x.count(1), x.count(2)) for x in (a[i::k] for i in range(k))))