s=list(input())
t=input()
i=len(s)-1
    
while s[i]=='z':
        s[i]='a'
        i-=1
s[i]=chr(ord(s[i])+1)
s=''.join(s)
if s>=t:
    print("No such string")
else:
    print(s)