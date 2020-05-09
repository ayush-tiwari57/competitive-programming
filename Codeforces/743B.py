n, k = map(int, input().split())
    
res = 1
while k % 2 == 0:
    res += 1
    k //= 2
    
print(res)