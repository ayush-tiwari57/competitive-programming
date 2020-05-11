"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""

def solution():
    
    # This is the main code
    n,m=map(int,input().split())
    l=list(map(int,input().split()))
    l.insert(0,0)
    ans=[]
    a={}
    for i in range(1,n+1):
        a[l[i]]=i
    # print(a)
    for i in range(1,n-1):
        if l[i]==i:
            continue
        x=i
        y=a[i]
        z=a[y]
        # print(x,y,z)
        flag=True
        if a[z]==a[x]:
            for j in range(y+1,n+1):
                if l[j]!=j:
                    z=j
                    flag=False
                    break
            
            if flag:
                for j in range(x+1,y):
                    if l[j]!=j:
                        z=j
                        flag=False
                        break
            if flag:
                print(-1)
                return
        t=sorted((x,y,z))
        # print(t)
        x=t[0]
        y=t[1]
        z=t[2]
        # print(x,y,z)
        if l[z]!=i:
            x,y=y,x
        ans.append((x,y,z))
        l[y],l[z]=l[z],l[y]
        l[x],l[y]=l[y],l[x]
        a[l[x]]=x
        a[l[z]]=z
        a[l[y]]=y
    s=sorted(l)
    if len(ans)>m or s!=l:
        print(-1)
        return
    else:
        print(len(ans))
        for i in range(len(ans)):
            print(ans[i][0],ans[i][1],ans[i][2])
for _ in range(int(input())):
    solution()