n=int(input())
l=list(map(int,input().split()))
i=s1=s2=0
j=n-1
a=[0]
s1+=l[i]
s2+=l[j]
while i!=j:
    if s1>s2:
        j-=1
        s2+=l[j]
    elif s2>s1:
        i+=1
        s1+=l[i]
    else:
        a.append(s1)
        i+=1
        s1+=l[i]
print(max(a))