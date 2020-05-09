a,b=map(int,input().split())
cnt=0
while a!=b:
    if a>b or b%2:
        b+=1
    else:
        b/=2
    cnt+=1
print(cnt)
