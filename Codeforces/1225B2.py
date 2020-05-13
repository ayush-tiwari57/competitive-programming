for _ in range(int(input())):
    n,k,di=map(int,input().split())
    l=list(map(int,input().split()))
    d={}
    cnt=0
    for i in range(di):
        if d.get(l[i],0)==0:
            cnt+=1
        d[l[i]]=d.get(l[i],0)+1
    ans=cnt
    j=di
    for i in range(n-di):
        d[l[i]]=d.get(l[i],0)-1
        if d[l[i]]==0:
            cnt-=1
        if d.get(l[j],0)==0:
            cnt+=1
        d[l[j]]=d.get(l[j],0)+1
        j+=1
        ans=min(ans,cnt)
    print(ans)