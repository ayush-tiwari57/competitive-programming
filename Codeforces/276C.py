"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n,q=map(int,input().split())
    l=list(map(int,input().split()))
    ql=[0]*(n+1)
    qa=[]
    for i in range(q):
        x,y=map(int,input().split())
        qa.append((x,y))
        ql[x-1]+=1
        ql[y]-=1
    for i in range(1,len(ql)):
        ql[i]+=ql[i-1]
    a=[]
    for i in range(len(ql)):
        a.append((ql[i],-i))
    ans=[0]*n
    a.sort(reverse=True)
    l.sort(reverse=True)
    for i in range(n):
        ind=abs(a[i][1])
        val=l[i]
        ans[ind]=val
    ans.reverse()
    ans.append(0)
    ans.reverse()
    for i in range(1,n+1):
        ans[i]+=ans[i-1]
    # print(ans)
    s=0
    for i in range(q):
        l=qa[i][0]-1
        r=qa[i][1]
        s+=(ans[r]-ans[l])
    print(s)
        
solution()