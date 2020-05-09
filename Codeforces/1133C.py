n=int(input())
l=list(map(int,input().split()))
l.sort()
i=0
j=1
a=1
while i<n and j<n:
    if l[j]-l[i]<=5:
        j+=1
        a=max(a,j-i)
    else:
        i+=1
print(a)