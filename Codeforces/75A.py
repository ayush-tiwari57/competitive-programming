a, b = input(), input()
a, b, s = (int(x.replace('0', '')) for x in [a, b, str(int(a) + int(b))])
print('YES' if a + b == s else 'NO')

