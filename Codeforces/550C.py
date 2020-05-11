n=['0','0']+list(input())
l=len(n)
n=[int(x) for x in n]

for i in range(l):
    for j in range(i+1,l):
        for k in range(j+1,l):
            # print(i,j,k)
            x=n[i]*100+n[j]*10+n[k]
            if (x)%8==0:
                print('YES')
                print(x)
                exit(0)
print('NO')