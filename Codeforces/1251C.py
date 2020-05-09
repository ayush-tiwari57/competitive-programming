for _ in range(int(input())):
    s=input()
    e=[]
    o=[]
    for i in s:
        if int(i)%2==0:
            e.append(int(i))
        else:
            o.append(int(i))
    i=0
    j=0
    ans=''
    while i<len(e) or j<len(o):
        if i==len(e):
            ans+=str(o[j])
            j+=1
            continue
        if j==len(o):
            ans+=str(e[i])
            i+=1
            continue
        if e[i]<o[j]:
            ans+=str(e[i])
            i+=1
        else:
            ans+= str(o[j])
            j+=1
    
    print(ans)  