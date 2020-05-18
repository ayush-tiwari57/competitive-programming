n=int(input())
s=set()
i=1
while i<100000:
    x=(i*(i+1))//2
    s.add(x)
    i+=1
for i in s:
    if n-i in s:
        print('YES')
        exit(0)
print('NO')