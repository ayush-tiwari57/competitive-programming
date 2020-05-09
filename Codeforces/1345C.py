for f in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    occup=[0]*n
    for i in range(n):
        occup[(i+a[i%n])%n]+=1
    if max(occup)>1:
        print("NO")
    else:
        print("YES")