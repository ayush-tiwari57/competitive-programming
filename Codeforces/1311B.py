for _ in range(int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    pl=[1]*n
    for p in map(int,input().split()):
        pl[p-1]=0
    prev=0
    f=0
    for i in range(n-1):
        if pl[i]:
            if max(a[prev:i+1]) > min(a[i+1:]):
                f=1
                break
    print('YNEOS'[f::2])