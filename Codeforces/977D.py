def m3(n):
    cnt=0
    while n%3==0:
        cnt+=1
        n//=3
    return cnt
n=int(input())
l=list(map(int,input().split()))
a=[]
for i in range(n):
    x=m3(l[i])
    a.append((-x,l[i]))
a.sort()
for i in range(n):
    print(a[i][1],end=' ')