arr = [3**i for i in range(40)]
s = sum(arr)
t = int(input())
for _ in range(t):
    n = int(input())
    m = s
    for i in arr[::-1]:
        if m - i >= n:
            m -= i
    print(m)