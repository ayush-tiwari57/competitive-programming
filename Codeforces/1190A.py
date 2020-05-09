n,m,k=map(int,input().split())
l=list(map(int,input().split()))
beg=1
cnt=0   
i=0
j=0
ele=0
while i<m:
    end=((l[i]-ele-1)//k+1)*k+ele
    while i<m and l[i]<=end:
        i+=1
        ele+=1
    
    
    cnt+=1
print(cnt)