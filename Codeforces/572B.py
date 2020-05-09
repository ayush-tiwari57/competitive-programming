s=[]
b=[]
bd=[0]*1000000
sd=[0]*1000000
pas=[]
pab=[]
n,k=list(map(int,input().split()))
for i in range(n):
    t, p, v = list(input().split(' '))
    p, v = int(p), int(v)
    if t=='B':
        bd[p]+=v
        pab.append(p)
    else:
        sd[p]+=v
        pas.append(p)
pas=set(pas)
pab=set(pab)
for i in pas:
    s.append(('S',i,sd[i]))
for i in pab:
    b.append(('B',i,bd[i]))
s.sort(key=lambda x: x[1])
b.sort(key=lambda x: x[1],reverse=True)
for i in range(min(len(s)-1,k-1),-1,-1):
    print(*s[i])
for i in range(min(len(b),k)):
    print(*b[i])