"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,m=map(int,input().split())
    l=[]
    for i in range(n):
        a=list(map(int,input().split()))
        l.append(a)
    ans=0
    for i in range(n//2):
        for j in range(m//2):
            d=[l[i][j],l[n-i-1][j],l[i][m-j-1],l[n-i-1][m-j-1]]
            
            # print(i,j)
            # d.sort()
            p=2e9
            for k in range(4):
                z=0
                for q in range(4):
                    z+=abs(d[k]-d[q])
                p=min(p,z)
            ans+=p
    # print(ans)
    if n%2==1:
        for j in range(m//2):
            ans+=abs(l[n//2][j]-l[n//2][m-j-1])
    if m%2==1:
        for j in range(n//2):
            ans+=abs(l[j][m//2]-l[n-j-1][m//2])
    print(ans)
t=int(input())
for _ in range(t):
    solution()