n=int(input())
l=list(map(int,input().split()))
e1,o1=0,0
for i in range(n):
    if i%2==0:
        e1=e1+l[i]
    else:
        o1=o1+l[i]
e2,o2=0,0
count=0
for i in range(n):
    if i%2==0:
        e1=e1-l[i]
        if o1+e2==e1+o2:
            count+=1
        e2=e2+l[i]
    else:
        o1=o1-l[i]
        if o1+e2==e1+o2:
            count+=1
        o2=o2+l[i]
print (count)