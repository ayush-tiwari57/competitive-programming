def chk(s,e):
    global a
    oc = [0 for i in range(e-s+1)]
    for i in a[s:e+1]:
        if i > e-s+1:
            return False
        oc[i-1]=1
    if 0 in oc:
        return False
    return True
    
t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    oc = [0 for i in range(n-1)]
    for i in a:
        oc[i-1]+=1
    if oc[0] !=2:
        print(0)
        continue
    for i in range(len(oc)):
        if oc[i] !=2:
            break
        min_ind = i
    num = 0
    ans = []
    if chk(0,min_ind) and chk(min_ind+1,n-1):
        ans.append([min_ind+1,n-min_ind-1])
        num+=1
    if chk(0,n-min_ind-2) and chk(n-min_ind-1,n-1):
        ans.append([n-min_ind-1,min_ind+1])
        num+=1
    if num == 0:
        print(0)
    elif num == 2 and ans[0][0] == ans[1][0]:
        print(1)
        print(*ans[0])
        continue
    else:
        print(num)
        for i in ans:print(*i)