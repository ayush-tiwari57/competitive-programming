for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a.sort()
    b.sort(reverse=True)
    i=0
    while k>0 and i<n:
        if a[i]>=b[i]:
            break
        a[i]=b[i]
        k-=1
        i+=1
    # print(a)
    print(sum(a))