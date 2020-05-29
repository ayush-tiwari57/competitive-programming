[n, k], arr = [int(i) for i in input().split()], [int(i) for i in input().split()]
print([i for i in range(n + 1) if sum(sorted(arr[0:i])[::-2]) <= k][-1])