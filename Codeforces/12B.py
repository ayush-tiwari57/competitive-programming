s=input()
ans=input()
l=[int(x) for x in s]
l.sort()
if len(l)!=1 and l[0]==0:
    i=1
    while l[i]==0:
        i+=1
    l[0],l[i]=l[i],l[0]
a=''
for i in range(len(l)):
    a+=str(l[i])
if a==ans:
    print('OK')
else:
    print('WRONG_ANSWER')
