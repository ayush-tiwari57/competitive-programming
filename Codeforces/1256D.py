for _ in range(int(input())):
    n,k=map(int,input().split())
    s=list(input())
    for i in range(0, n): 
        s[i] = int(s[i]) 
    a=[]
    ai=[]
    for j in range(n):
        if s[j]==1:
            a.append(j)
    z=0
    j=a[z]
    i=a[z]+1
    while i<n and k!=0 and z<len(a):    
        if s[i]==0:
            if abs(j-i)<k:
                temp=s[i]
                s[i]=s[j]
                s[j]=temp
                k-=abs(i-j)
                ai.append(i)
                if ai[0]<a[z+1]:
                    j=ai[0]
                    ai.pop(0)
                else:
                    z+=1
                    j=a[z]
            else:
                temp=s[i]
                s[i]=s[i-k]
                s[i-k]=temp
                k=0
        i+=1
    print(*s,sep='')
