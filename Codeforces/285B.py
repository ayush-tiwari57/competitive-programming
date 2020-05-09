rd = lambda: list(map(int, input().split()))
    
n, s, t = rd()
p = rd()
for i in range(n):
    if s == t : print(i); exit()
    s = p[s-1]
print(-1)