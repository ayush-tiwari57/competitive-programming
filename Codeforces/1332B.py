

t=int(input())
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    col = 0
    ans = []
    di = {2:0,3:0,5:0,7:0,11:0,13:0,17:0,19:0,23:0,29:0,31:0}
    for i in l:
        for j in di:
            if(i%j == 0):
                if(di[j]==0):
                    col +=1
                    di[j] = col
                ans.append(di[j])
                break
    print(col)
    print(*ans)