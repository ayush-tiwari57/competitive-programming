n = int(input())
a = [list(map(int, input().split())) for i in range(n)]
t = set()
for i in range(n):
    for j in range(n):
        if i != j and a[i][1] == a[j][0]: t.add(j)
print(n - len(t))