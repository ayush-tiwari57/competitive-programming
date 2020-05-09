n=int(input())
for i in range(n):
    for j in range(n):
        print(j*n+i+1) if j%2==0 else print((j+1)*n-i)