n,a,b=map(int,input().split())
l=list(map(int,input().split()))
cb=b
for i in range(n):
    # print(a,cb)
    if a==0 and cb==0:
        print(i)
        exit(0)
    if l[i]==0:
        if cb!=0:
            cb-=1
        else:
            a-=1
    else:
        if cb<b:
            if a!=0:
                a-=1
                cb+=1
            else:
                cb-=1
        else:
            if cb!=0:
                cb-=1
            else:
                a-=1
print(n)