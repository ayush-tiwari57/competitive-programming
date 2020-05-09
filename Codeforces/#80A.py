for x in range(int(input())):
    n,d=map(int,input().split())
    if ((n//2+1)*(n//2-n)+d <=0):
        print("YES")
    else:
        print("NO")