h, w = map(int, input().split())
x0, y0, x1, y1, c = 1000, 1000, -1, -1, 0
for i in range(h):
    row = str(input())
    for j in range(w):
        if row[j] == 'B':
            x0, y0, x1, y1, c = min(x0, i), min(y0, j), max(x1, i), max(y1, j), c + 1
ln = max(x1 - x0 + 1, y1 - y0 + 1)
if ln > min(h, w):
    print(-1)
elif x1 == -1:
    print(1)
else:
    print(ln * ln - c)