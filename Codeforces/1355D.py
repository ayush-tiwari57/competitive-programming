n,s=map(int,input().split())
if s>=2*n:
    print('YES')
    l=[1]*(n-1)
    l.append(s-n+1)
    print(*l)
    print(s//2)
else:
    print('NO')
