for _ in range(int(input())):
    n = int(input())
    lis=[]
    for i in range(n):
        p=input()
        lis.append(int(p))
    ans=0
    for i in range(n-1):
        if lis[i] in lis[i+1:]:
            ans+=1
            while lis[i] in lis[:i]+lis[i+1:]:
                lis[i]+=1000
                lis[i]%=10000    
    print(ans)
    for i in lis:
        print('%04d'%int(i))