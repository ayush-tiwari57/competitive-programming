n=int(input())
l=list(map(int,input().split()))
t=int(input())
l.sort()
a=[]
i=0
j=0
while i<n:
    while j<n and l[j]-l[i]<=t:
        j+=1
    a.append(j-i)
    i+=1
print(max(a))