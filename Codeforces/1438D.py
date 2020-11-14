n = int(input());l = [int(x) for x in input().split()];xx = 0
for i in l:    xx = (xx ^ i)
if n % 2 == 0 and xx != 0:    print("NO")
else:
    print("YES");ans = []
    for i in range(3, n+1, 2):        
        ans.append([i-2, i-1, i])
    for i in range(2, n, 2):        
        ans.append([i-1, i, n])
    print(len(ans))
    for i in ans:        
        print(*i)