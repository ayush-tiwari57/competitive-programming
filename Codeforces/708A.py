s=list(input())
i=f=0
while(i<len(s)):
    while(i<len(s) and s[i]!='a'):
        s[i]=chr(ord(s[i])-1)
        f=1
        i+=1
    if(f):
        break
    i+=1
if(f==0):
    s[len(s)-1]='z'
print("".join(s))