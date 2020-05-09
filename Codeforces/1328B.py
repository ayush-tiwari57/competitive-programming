t=int(input())
for i in range(t):
    n,k=map(int,input().split())
    i=1
    s=0
    while s<k:
        s+=i
        i+=1
    print("a"*(n-i)+ "b" + "a" *(s-k)+ 'b' +'a'*(k+i-2-s))