n, m = map(int,input().split())
l = 0
for i in range(n):
    x,y = map(int, input().split())
    if l >= x and l <= y:
        l = y
print(["NO","YES"][l >= m])