n = input()
if n == '1': print(1)
else:
    t, y, x = [1, int(n)], set(n), int(n)
    for d in range(2, int(x ** 0.5) + 1):
        if x % d == 0: t += [d, x // d]
    if t[-1] == t[-2]: t.pop()
    print(sum(len(set(str(i)) & y) > 0 for i in t))