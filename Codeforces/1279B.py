for _ in range(int(input())):
    n,s=map(int,input().split())
    l=list(map(int,input().split()))
    a=m=0
    if sum(l)<=s:
        print(0)
    else:
        for i in range(n):
            a+=l[i]
            m=max(l[i],m)
            if a>s:
                break
        for i in range(n):
            if l[i]==m:
                print(i+1)
                break