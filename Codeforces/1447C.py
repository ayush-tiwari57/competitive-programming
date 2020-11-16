"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,w=map(int,input().split())
    l=list(map(int,input().split()))
    y=0
    if w%2!=0:
        y=1
    if min(l)>w or sum(l)<w//2+y:
        print(-1)
    else:
        s=0
        x=[]
        for i in range(n):
            x.append([l[i],i])
        x.sort(reverse=True)
        ans=[]
        for i in range(n):
            if s+x[i][0]<=w:
                s+=x[i][0]
                ans.append(x[i][1]+1)
        if s>=w//2+y and s<=w:
            print(len(ans))
            print(*ans)
        else: 
            print(-1)

t=int(input())
for _ in range(t):
    solution()