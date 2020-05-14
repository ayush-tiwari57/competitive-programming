# from collections import Counter
n=int(input())
l=list(map(int,input().split()))
a=[0]*150002
l.sort(reverse=True)
for i in range(n):
    if a[l[i]+1]==0:
        a[l[i]+1]=1
    elif a[l[i]]==0:
        a[l[i]]=1
    elif a[l[i]-1]==0 and l[i]!=1:
        a[l[i]-1]=1
    else:
        continue
ans=0
for i in range(len(a)):
    if a[i]>0:
        ans+=1
# print(l)
print(ans)