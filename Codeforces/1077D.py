n,k=map(int,input().split(' '))
a=list(map(int,input().split(' ')))
d={}
for i in a:
    if i in d.keys():
        d[i]+=1
    else:
        d[i]=1
s=[]
for i,j in d.items():
    s.append([j,i])
s.sort(reverse=True)
b=[]
for i in range(len(s)):
    j=1
    while s[i][0]//j!=0:
        b.append([s[i][0]//j,s[i][1]])
        j+=1
b.sort(reverse=True)
for i in range(k):
    print(b[i][1],end=' ')