n=int(input())
l=list(map(int,input().split()))
d=[0]*7
ans=0
for i in range(n):
    if l[i]==4:
        d[1]+=1
    elif l[i]==8 and d[1]>d[2]:
        d[2]+=1
    elif l[i]==15 and d[2]>d[3]:
        d[3]+=1
    elif l[i]==16 and d[3]>d[4]:
        d[4]+=1
    elif l[i]==23 and d[4]>d[5]:
        d[5]+=1
    elif l[i]==42 and d[5]>d[6]:
        d[6]+=1
    else:
        ans+=1
for i in range(1,6):
    ans+=d[i]-d[6]
print(ans)