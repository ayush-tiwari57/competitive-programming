for _ in range(int(input())):
    n=int(input())
    cnt=0
    a=[]
    while n>0:
        x=n%10
        n//=10
        if x==0:
            cnt+=1
            continue
        a.append(x*(10**cnt))
        cnt+=1
    print(len(a))
    print(*a)