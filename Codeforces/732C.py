l=[int(i) for i in input().split()]
m=max(l)
print(sum(m-z-1 for z in l if z<m))

