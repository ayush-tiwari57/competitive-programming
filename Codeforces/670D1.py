n, k = map(int, input().split())
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]
min_c = float('inf')
for x, y in zip(a, b):
    min_c = min(min_c, y // x)
k2 = k
while k2 >= 0:
    k2 = k
    min_c += 1
    for x, y in zip(a, b):
        k2 -= max(x * min_c - y, 0)
print(min_c - 1)