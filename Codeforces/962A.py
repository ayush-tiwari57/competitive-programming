n=int(input())
l=list(map(int,input().split()))
s=sum(l)
if s%2==0:
    s//=2
else:
    s//=2
    s+=1
if l[0]>=s:
    print(1)
else:
    for i in range(1,n):
        l[i]+=l[i-1]
        if l[i]>=s:
            print(i+1)
            break
    