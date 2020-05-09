input()
s = input()
d = {}
for i in range(len(s)):
    if s[i] not in d:
        d[s[i]] = []
    d[s[i]].append(i + 1)
for _ in range(int(input())):
    k = {}
    for i in input():
        if i not in k:
            k[i] = 0
        k[i] += 1
    m = -1
    for i in k:
        m = max(m, d[i][k[i] - 1])
    print(m)