for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    i=0
    while i<n and a[i]>=i: i+=1
    j=n-1
    while j>=0 and a[j]>=n-1-j: j-=1
    if i>j+1:
        print("Yes")
    else:
        print("No")