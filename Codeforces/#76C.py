for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    l1=[]
    a1=[0]*(n+1)
    a2=[0]*(n+1)
    for i in range(n):
        if a1[l[i]]==0:
            a1[l[i]]=1
            a2[l[i]]=i
        else:
            ans=i-a2[l[i]]
            a2[l[i]]=i
            l1.append(ans)
    if(len(l1)==0):
        print('-1')
    else:
        ans=min(l1)
        print(ans+1)