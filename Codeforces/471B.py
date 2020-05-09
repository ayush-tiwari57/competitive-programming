n=int(input())
l=list(map(int,input().split()))
s=[]
for i in range(n):
    x=[l[i],i]
    s.append(x)
s.sort()
flag=0
sw=[]
ans=[]
for i in range(n):
    x=s[i][1]
    ans.append(x)
for i in range(n-1):
    if s[i][0]==s[i+1][0]:
        sw.append((i,i+1))
    if len(sw)==2:
        print('YES')
        flag=1
        break
if flag==1:
    for i in range(3):
        for j in range(n):
            print(ans[j]+1,end=' ')
        print()
        if i!=2:
            ans[sw[i][0]],ans[sw[i][1]]=ans[sw[i][1]],ans[sw[i][0]]
else:
    print('NO')