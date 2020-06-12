for _ in range(int(input())):
    n,m=map(int,input().split())
    mas=[list(map(int,input().split())) for i in range(n)]
    ans=0
    for a in range((n+m-1)//2):
        t = [0, 0]
        for i in range(min(a+1,n)):
            j=a-i
            if j>=m:continue
            t[mas[i][j]]+=1
            t[mas[-i-1][-j-1]]+=1
        ans+=min(t)
    print(ans)