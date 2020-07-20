def solve():
    n=int(input())
    l=list(map(int,input().split()))
    pr = {0} 
    s= set() 
    for x in l: 
        pr = {x | y for y in pr} | {x} 
        s |= pr 
    l=len(s) 
    if l==(n*(n+1))/2:
        print('YES')
    else:
        print('NO')

for _ in range(int(input())):
    solve()