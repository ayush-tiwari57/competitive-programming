for i in range(int(input())):

	n = int(input())
	s = list(map(int, input().split()))
	ok = False
	for i in range(n):
		for j in range(i + 2, n):
			if s[i] == s[j]: ok = True
	print('YES' if ok else 'NO')