for _ in range(int(input())):
    n1,n2,n3=map(int,input().split())
    ans='0'*(n1+1)
    if n1==0 and n2==0:
        ans=''
    if n3!=0 or n2!=0:
        ans+='1'*(n3+1)
    n2-=1
    while n2>0:
        if ans[-1]=='1':
            ans+='0'
        else:
            ans+='1'
        n2-=1
    print(ans)