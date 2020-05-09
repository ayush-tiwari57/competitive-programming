for _ in range(int(input())):
    n=int(input())
    l=[]
    for i in range(n):
        s=list(map(int,input().split()))
        l.append(s)
    l.sort()
    flag=0
    r=0
    u=0
    ans=''
    for i in range(n-1):
        if l[i+1][0]-l[i][0]<0 or l[i+1][1]-l[i][1]<0:
            flag=1
            break
    if flag==1:
        print('NO')
    else:
        print('YES')
        for i in range(n):
            x=l[i][0]-r
            y=l[i][1]-u
            r=r+x
            u=u+y
            ans+='R'*x+'U'*y
        print(ans)