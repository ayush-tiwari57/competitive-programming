for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    l1=[]
    cnt=0
    l.sort()
    for i in range(n-1):
        cnt+=1
        if l[i]!=l[i+1]:
            l1.append(cnt)
            cnt=0
    l1.append(l.count(l[n-1]))
    l1.sort()
    l1.reverse()
    cnt=l1[0]
    sum=l1[0]
    for i in range(1,len(l1)):
        cnt1=l1[i]
        if cnt==0:
            break
        if cnt<=cnt1:
            cnt-=1
        else:
            cnt=cnt1
        sum+=cnt
    print(sum)