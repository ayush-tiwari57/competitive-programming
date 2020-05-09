d=dict()
s=input()
for i in set(s):
    a=s.index(i)
    d[i]=[a+1,a]
p=0
for j in range(len(s)):
    i=s[j]
    d[i][0]=max(d[i][0],j-d[i][1])
    d[i][1]=j
ans=len(s)
k=len(s)
for i in d.values():
    if i[0]!=0:
        ans=min(ans,max(i[0],k-i[1]))
print(ans)