t=int(input())
while(t>0):
    t-=1
    n,k=map(int,input().split())
    if((n-k+1)>0 and (n-k+1)%2==1):
        print("YES")
        print("1 "*(k-1),n-k+1)
    elif((n-2*(k-1))>0 and (n-2*(k-1))%2==0):
        print("YES")
        print("2 "*(k-1),n-2*(k-1))
    else:
        print("No")