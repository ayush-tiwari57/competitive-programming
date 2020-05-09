for t in range(int(input())):
    d=int(input())
    D=d*(d-4)
    if D<0:
        print("N")
    else:
        D=D**0.5
        print("Y",(d+D)/2,(d-D)/2)