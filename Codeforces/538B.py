ans = []
n = int(input())
while n:
    d = ''.join(min(i, '1') for i in str(n))
    n -= int(d)
    ans.append(d)
print(len(ans))
print(*ans)