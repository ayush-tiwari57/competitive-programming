for _ in range(int(input())):
    n=int(input())
    ans=0
    for i in range(n//2+1):
        if n==1:
            s=1
        else:
            s=8+(i-1)*8
        ans+=s*i
    print(ans)