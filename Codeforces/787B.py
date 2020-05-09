n, m = map(int,input().split())
for i in range(m):
    k,*l = map(int,input().split())
    l = set(l)
    for j in l:
        if -j in l:
            break
    else:
        exit(print("YES"))
print("NO")