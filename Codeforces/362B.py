n,m=map(int,input().split())
if m==0:
    print('YES')
    exit(0)
else:
    l=list(map(int,input().split()))
    l.sort()
    flag=0
    if l[0]==1 or l[m-1]==n:
        print('NO')
    else:
        for i in range(m-2):
            if l[i+2]-l[i+1]==1 and l[i+1]-l[i]==1:
                flag=1
                break
        if flag==1:
            print('NO')
        else:
            print("YES")