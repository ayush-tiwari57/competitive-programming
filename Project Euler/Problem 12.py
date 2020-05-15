def factor(n):
    cnt=0
    for i in range(1,int(n**0.5)+1):
        if n%i==0:
            if n//i==i:
                cnt+=1
            else:
                cnt+=2
    return cnt
i=1
while True:
    n=(i*(i+1))//2  
    ans=factor(n)
    if ans>500:
        print(n)
        break
    i+=1