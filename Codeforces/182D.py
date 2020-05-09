s1=input()
s2=input()
a=[]
b=[]
s=''
for i in range(len(s1)):
    s+=s1[i]
    x=len(s1)//(i+1)
    if s*x==s1:
        a.append(s)
s=''
for i in range(len(s2)):
    s+=s2[i]
    x=len(s2)//(i+1)
    if s*x==s2:
        b.append(s)
cnt=0
for i in range(len(a)):
    for j in range(len(b)):
        if a[i]==b[j]:
            cnt+=1
print(cnt)
