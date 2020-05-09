n,k= map(int, input().split())
a= list(map(int, input().split()))
    
if max(a)-min(a)>k:
    print('NO')
    exit()
    
print('YES')
for x in a:
    for i in range(x):
        print(1+ i%k, end=' ')
    print()