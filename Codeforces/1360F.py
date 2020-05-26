"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        n,m=map(int,input().split())
        l=[]
        ans=[]
        for i in range(n):
            s=input()
            l.append(list(s))
            flag=0
        for i in range(n):
            for j in range(m):
                x=[]
                for q in range(m):
                    x.append(l[i][q])
                cnt=0
                for k in range(n):
                    x[j]=l[k][j]
                    print(x)
                    for z in range(m):
                        if x[j]!=l[k][z]:
                            cnt+=1
                    if cnt>1:
                        flag=1
                if flag==0:
                    ans=x[i]
        print(ans)
solution()