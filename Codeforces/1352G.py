t = int(input())
for _ in range(t):
    n = int(input())
    if n >= 4:
        print(*[i for i in range(n + n % 2 - 1, 4, -2)] + [3, 1, 4, 2] + [i for i in range(6, n + 1, 2)])
    else:
        print(-1)