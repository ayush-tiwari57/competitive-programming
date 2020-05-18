"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    n,m=map(int,input().split())
    l=[]
    r=[0]*1001
    c=[0]*1001
    cnt=0
    for i in range(n):
        x=list(input())
        # print(x)
        for j in range(m):
            if x[j]=='*':
                cnt+=1
                r[i]+=1
                c[j]+=1
        l.append(x)
    # print(cnt)
    for i in range(n):
        for j in range(m):
            x=r[i]+c[j]
            if l[i][j]=='*':
                x-=1
            if x==cnt:
                print('YES')
                print(i+1,j+1)
                exit(0)

    print('NO')

solution()