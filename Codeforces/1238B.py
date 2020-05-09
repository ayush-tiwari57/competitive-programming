q=int(input())
s=''
for _ in range(q):
    n,r=map(int,input().split())
    l=set(map(int,input().split()))
    l=list(l)
    l=sorted(l)
    count=0
    while l and l[-1]>count*r:
        l.pop()
        count+=1
    s+=str(count)+"\n"
print(s)