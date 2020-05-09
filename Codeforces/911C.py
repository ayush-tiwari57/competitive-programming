a=sorted(map(int,input().split()))
print('YES'if a.count(1) or a.count(2)>1 or a.count(3)>2 or a==[2,4,4] else 'NO')

