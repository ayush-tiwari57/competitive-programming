lx, ly, nc = map(int, input().split())
    
s = 'L'*(ly-1) + 'U'*(lx-1)
cur = 0
for i in range(ly):
    if i:
        s += 'R'
    s += ('DU'[cur])*(lx-1)
    cur = 1-cur
    
print(len(s))
print(s)