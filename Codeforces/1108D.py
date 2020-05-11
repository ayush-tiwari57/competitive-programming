n=int(input())
s=list(input())
l=['R','G','B']
s.append('a')
cnt=0
j=0
ans=s[0]
for i in range(1,n):
    if s[i-1]==s[i]:
        cnt+=1
        while s[i]==s[i-1] or s[i]==s[i+1]:
            j+=1
            s[i]=l[j%3]
    ans+=s[i]

print(cnt)
print(ans)