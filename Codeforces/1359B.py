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
        n,m,x,y=map(int,input().split())
        l=[]
        for i in range(n):
            s=list(input())
            l.append(s)
        # print(l)
        ans=0
        i=0
        while i<n:
            j=0
            while j<m:
                # print(i,j)
                # print(ans)
                if l[i][j]=='.':
                    if j!=m-1:
                        if l[i][j]==l[i][j+1]:
                            if 2*x>y:
                                ans+=y
                                j+=1
                            else:
                                ans+=x
                        else:
                            ans+=x
                    else:
                        ans+=x
                j+=1
            i+=1
        print(ans)
solution()          