n,m,q=map(int,input().split())
s=input()
t=input()
ans=[0]*n
for i in range(n-m+1):
    if s[i:i+m]==t:
        ans[i]=1
# print(ans)
for i in range(q):
    x,y=map(int,input().split())
    if y-x+1<m:
        print(0)
    else:
        print(sum(ans[x-1:y-m+1]))