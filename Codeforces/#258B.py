n = int(input())
l = list(map(int,input().split()))
i=1
while i<n and l[i]>=l[i-1]:
    i+=1
j=i
while j<n and l[j]<=l[j-1]:
    j+=1
    
t = l[:i-1]+l[i-1:j][::-1]+l[j:]
    
l.sort()
if t==l:
    print("yes")
    print(i,j)
else:
    print("no")