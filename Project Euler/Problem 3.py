def prime(x):
    a=[]
    while x%2==0:
        a.append(2)
        x//=2
    for i in range(3,int(x**0.5)+1):
        while x%i==0:
            a.append(i)
            x//=i
    print(max(a))
prime(600851475143)