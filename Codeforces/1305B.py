s=input();n=len(s)
a=[];b=[];i=0;j=n-1
while i<j :
    if s[i]=='(' and s[j]==')':
        a.append(i+1)
        b=[j+1]+b;i+=1;j-=1
    elif s[j]=='(':
        j-=1
    elif s[i]==')':
        i+=1
if len(a)!=0:
    print(1)
    print(len(a)+len(b))
    print(*a,*b)
else:
    print(0)