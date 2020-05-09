input()
p = v = 0
for i in sorted(map(int, input().split())):
	v += max(0, p-i+1)
	p = max(p+1, i)
print(v)