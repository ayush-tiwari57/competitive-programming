for i in range(1001):
    for j in range(1001):
        k=1000-(i+j)
        if k>=0 and i*i+j*j==k*k:
            print(i*j*k)