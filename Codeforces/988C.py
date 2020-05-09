k=int(input())
d={}
for i in range(k):
    n=int(input())
    a=list(map(int,input().split()))
    s=sum(a)
    for j in range(n):
        x=s-a[j]
        if (x in d) and (d[x][0]!=i):
            print("YES")
            print(d[x][0]+1,d[x][1]+1)
            print(i+1,j+1)
            exit()
        elif x not in d:
            d[x]=(i,j)
print("NO")