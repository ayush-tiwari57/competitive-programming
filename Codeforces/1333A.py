t = int(input())
for z in range(t):
    b,w = map(int,input().split())
    print("W"+"B"*(w-1))
    for i in range(b-1):
        print("B"*w)