for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    s=set(l)
    k=1
    flag=f=0
    if len(s)==1:
        print(1)
        for i in range(n):
            print(1,end=' ')
    elif n%2==0:
        print(2)
        for i in range(n):
            if i%2==0:
                print(1,end=' ')
            else:
                print(2,end=' ')
    else:
        for i in range(n):
            if i==n-1:
                if l[i]==l[0]:
                    f=1
                    k=0
                    break
            elif l[i]==l[i+1]:
                f=1
                break
            else:
                continue
        if f==0:
            print(3)
            for j in range(n):
                if j==n-1:
                    print(3,end=' ')
                elif j%2==0:
                    print(1,end=' ')
                else:
                    print(2,end=' ')
        else:
            print(2)
            for j in range(n):
                if j==i:
                    if flag==0:
                        print(1,end=' ')
                    else:
                        print(2,end=' ')
                elif j==i+1 or k==1:
                    if flag==0:
                        print(1,end=' ')
                        flag=1
                    else:
                        print(2,end=' ')
                        flag=0
                elif flag==0:
                    print(1,end=' ')
                    flag=1
                else:
                    print(2,end=' ')
                    flag=0
    print()