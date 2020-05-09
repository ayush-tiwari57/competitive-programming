n,m=map(int,input().split())
l=[['.']*(m+2)]
for i in range(n):
    s=(input())
    l.append(list('.'+s+'.'))
s=['.']*(m+2)
l.append(s)
cnt=0
for i in range(1,n+1):
    for j in range(1,m+1):
        if l[i][j]=='W':
            if l[i+1][j]=='P' or l[i-1][j]=='P' or l[i][j+1]=='P' or l[i][j-1]=='P':
                cnt+=1
print(cnt)
        