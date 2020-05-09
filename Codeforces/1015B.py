n=int(input())
s=list(input())
t=list(input())
i=0
f=0
a=[]
while(i<n):
    flag=0
    x=i
    if s[i]!=t[i]:
        j=i+1
        pos=0
        while j<n:
            if s[j]==t[i]:
                pos=j
                break
            j+=1
        if pos==0:
            flag=1
            break
        else:
            for j in range(pos-1,i-1,-1):
                s[j],s[j+1]=s[j+1],s[j]
                a.append(j+1)
    i+=1   
if flag==1:
    print(-1)
else:
    print(len(a))
    print(*a)