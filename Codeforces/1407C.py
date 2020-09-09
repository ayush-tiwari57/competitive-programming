n = int(input())
arr = [-1]*n
ii = 0
for i in range(1, n):
    print("?", ii+1, i+1)
    l = int(input())
    print("?", i+1, ii+1)
    r = int(input())
    if l > r:
        arr[ii] = l
        ii = i
    else:
        arr[i] = r
for i in range(n):
    if arr[i] == -1:
        arr[i] = n
        break
print("!", *arr)