n=int(input())
s=input()
flag=0
for i in range(n-1):
    if s[i+1]<s[i]:
        flag=1
        break
if flag==1:
    print('YES')
    print(i+1,i+2,sep=' ')
else:
    print('NO')