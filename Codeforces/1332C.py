for _ in range(int(input())):
    n,k=map(int,input().split())
    s=input()
    d=''
    cnt=0
    for i in range(k):
        d+=s[i]
    for i in range(k//2):
        if d[i]!=d[k-1-i]:
            d[k-1-i]=d[i]
            cnt+=1
    for i in range(k,n):
        if s[i]!=d[i%k]:
            cnt+=1
    print(cnt)