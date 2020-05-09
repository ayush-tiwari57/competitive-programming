n, k = map(int, input().split())
t = ''
for i in map(ord, input()):
    d = min(k, max(122 - i, i - 97))
    t += chr(i + d if i + d < 123 else i - d)
    k -= d
print(-1 if k else t)