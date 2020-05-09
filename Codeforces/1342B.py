for _ in range(int(input())):
    n=input()
    s=list(n)
    ans=''
    if s.count('1')==len(s) or s.count('1')==0:
        print(n)
    else:
        for i in range(len(s)):
            ans+='01'
        print(ans)