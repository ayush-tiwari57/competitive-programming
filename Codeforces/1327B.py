for _ in range(int(input())):
    n=int(input())
    a=[0]*(n+1)
    d=[0]*(n+1)
    flag=0
    f=0
    for i in range(n):
        l=list(map(int,input().split()))
        l.pop(0)
        j=0
        while(j<len(l)):
            if a[l[j]]==0 and l[j]!=0:
                a[l[j]]=1
                d[i+1]=1
                break
            j+=1
    for i in range(1,n+1):
        if a[i]==0:
            x=i
            flag=1
            break
    for i in range(1,n+1):
        if d[i]==0 and flag==1:
            f=1
            y=i
            break
    if f==1:
        print('IMPROVE')
        print(y,x)
    else:
        print('OPTIMAL')