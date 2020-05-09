n,d = map(int,input().split())
ar = list(map(int,input().split()))
    
i,j,s = 0,0,0
    
while i<n:
    while ar[i]-ar[j]>d:
        j += 1
    N = i-j
    s += N*(N-1)//2
    i += 1
print(s)