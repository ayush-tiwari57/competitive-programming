for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    k=0
    c=n-1
    for i in range(n):
        x=min(l[i:n])
        if i==x-1 and l[i]==x:
            k+=1
            continue
        if l[i]==x:
            j=i
            while j>k and c!=0 and l[j]<l[j-1]:
                l[j],l[j-1]=l[j-1],l[j]
                j-=1
                c-=1
            k=i
    print(*l)   
