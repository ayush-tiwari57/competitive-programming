from collections import Counter
s=list(input())
t=list(input())
ct=Counter(t)
y=w=0
ans=''
for i in range(len(s)):
    if ct[s[i]]>0:
        y+=1
        ct[s[i]]-=1
    else:
        ans+=s[i]
for i in ans:
    if i.islower():
        x=i.upper()
    else:
        x=i.lower()
    if ct[x]>0:
        w+=1
        ct[x]-=1

print(y,w)