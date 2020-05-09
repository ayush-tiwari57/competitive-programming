n,k=map(int,input().split())
f=[]
for i in range(1,int(n**.5)+1):
    if n%i==0:
        f+=[i]
        if i*i!=n: f+=[n//i]
f=sorted(f)
print(-1 if len(f)<k else f[k-1])