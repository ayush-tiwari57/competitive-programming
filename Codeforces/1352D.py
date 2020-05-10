for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    s1=l[0]
    s2=0
    ss1=l[0]
    ss2=0
    cnt=1
    i=1
    j=n-1
    while i<=j:
        if s1>s2:
            while s1>=s2 and i<=j:
                s2+=l[j]
                j-=1
            s1=0
        else:
            while s2>=s1 and i<=j:
                s1+=l[i]
                ss1+=l[i]
                i+=1
            s2=0
        cnt+=1
    # print(i,j)
    # s1=sum(l[0:i+1])
    # s2=sum(l[j+1:n])
    ss2=sum(l)-ss1
    print(cnt,ss1,ss2)