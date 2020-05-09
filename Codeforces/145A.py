a=list(input())
t=list(input())
cnta=0
cntb=0
for i in range(len(a)):
    if a[i]=='7' and t[i]=='4':
        cnta+=1
    if a[i]=='4' and t[i]=='7':
        cntb+=1
print(max(cnta,cntb))