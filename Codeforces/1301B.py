for _ in range(int(input())):
    n=int(input())
    a=[]
    b=[]
    l=list(map(int,input().split()))
    if l.count(-1)==n:
        print(0,0)
    else:
        for i in range(n):
            if l[i]!=-1:
                if i==0:
                    if l[i+1]==-1:
                        a.append(l[i])
                elif i==n-1:
                    if l[i-1]==-1:
                        a.append(l[i])
                else:
                    if l[i+1]==-1 or l[i-1]==-1:
                        a.append(l[i])
        k=(max(a)+min(a))//2
        for i in range(n):
            if l[i]==-1:
                l[i]=k
        for i in range(1,n):
            b.append(abs(l[i]-l[i-1]))
        print(max(b),k)