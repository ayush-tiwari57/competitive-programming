n,m=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
cnt=0
i = j = 0
while i < n and j < m:
    if a[i] <= b[j]:
        i += 1
    j += 1
print(n - i)