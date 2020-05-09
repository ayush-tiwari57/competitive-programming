n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
s1=s2=0
a.sort(reverse=True)
b.sort(reverse=True)
a.append(0)
b.append(0)
flag=0
i=j=0
while a[i]!=0 or b[j]!=0:
    if flag==0:
        if a[i]>b[j]:
            s1+=a[i]
            i+=1
        else:
            j+=1
        flag=1
    else:
        if b[j]>a[i]:
            s2+=b[j]
            j+=1
        else:
            i+=1
        flag=0
print(s1-s2)