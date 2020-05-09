from collections import defaultdict
n=int(input())
s=input()
l=0
d=defaultdict(int)
e=defaultdict(int)
se=set(list(s))
a=[]
j=0
for i in range(n):
    d[s[i]]+=1
    if s[i] not in e:
        l+=1
        e[s[i]]=1
    if l==len(se):
        while d[s[j]]>1:
            d[s[j]]-=1
            j+=1
        a.append(i-j+1)
print(min(a))