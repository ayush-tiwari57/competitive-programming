for _ in range(int(input())):
    n=int(input())
    s=input()
    a=[]
    b=[]
    flag=0
    for i in range(n):
        if s[i]=='0':
            a.append(0)
            b.append(0)
        elif s[i]=='1':
            if flag==0:
                a.append(1)
                b.append(0)
                flag=1
            else:
                a.append(0)
                b.append(1)
        else:
            if flag==0:
                a.append(1)
                b.append(1)
            else:
                a.append(0)
                b.append(2)
    for i in range(n):
        print(a[i],end='')
    print()
    for i in range(n):
        print(b[i],end='')
    print()