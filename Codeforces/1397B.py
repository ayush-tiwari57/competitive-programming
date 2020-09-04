n = int(input())
a = [int(x) for x in input().split()]
a.sort()
inf = 10**18

if n <= 2:
    print(a[0] - 1)
else:
    ans = sum(a) - n

    for x in range(1, 10**9):
        curPow = 1
        curCost = 0
        for i in range(n):
            curCost += abs(a[i] - curPow)
            curPow *= x
            if curPow > inf:
                break

        if curPow > inf:
            break
        if curPow / x > ans + a[n - 1]:
            break

        ans = min(ans, curCost)

    print(ans)