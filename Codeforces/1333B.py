for _ in range(int(input())):
    n=int(input())
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    y=x=-1
    flag=0
    for i in range(n):
        if l1[i]==1:
            x=i
            break
    for i in range(n):
        if l1[i]==-1:
            y=i
            break
    for i in range(n):
        if (l2[i]<l1[i] and y>=i) or (l2[i]<l1[i] and y==-1):
            flag=1
            break
        if (l2[i]>l1[i] and x>=i) or(l2[i]>l1[i] and x==-1):
            flag=1
            break
    if flag==1:
        print('NO')
    else:
        print('YES')