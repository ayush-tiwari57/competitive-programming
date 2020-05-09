n=int(input())
a=list(map(int,input().split()))
if 5 in a or 7 in a:
    print(-1)
    exit(0)
b=[0]*(8)
for i in range(8):
    b[i]=a.count(i)
if b[2]+b[3]==(n//3) and b[1]==n//3 and b[4]+b[6]==n//3 and b[2]>=b[4] and b[6]>=b[3]:
    print('1 2 4\n'*b[4] +'1 3 6\n'*b[3]+ '1 2 6\n'*(b[6]-b[3]) )
else:
    print(-1)