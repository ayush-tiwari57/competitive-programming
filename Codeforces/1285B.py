for _ in range(int(input())):
    n=int(input())
    A=list(map(int,input().split()))
    a=b=0
    r='YES'
    for i in range(n-1):
        a+=A[i]
        b+=A[n-i-1]
        if a<1 or b<1:
            r='NO'
            break
    print(r)