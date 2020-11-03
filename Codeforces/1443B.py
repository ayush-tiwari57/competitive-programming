"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    a,b=map(int,input().split())
    s=input()
    n=len(s)
    i=0
    j=n-1
    while i<n and s[i]=='0':
        i+=1
    while j>=0 and s[j]=='0':
        j-=1
    l=[]
    cnt=0
    while i<=j:
        if s[i]=='0':
            cnt+=1
        else:
            if cnt>0:
                l.append(cnt)
            cnt=0
        i+=1
    # print(l)
    l.sort()
    if len(l)==0:
        if '1' in s:
            print(a)
        else:
            print(0)
        return
    ans=a*(len(l)+1)
    cnt=0
    # print(l)
    for i in range(len(l)):
        if 2*a>l[i]*b+a:
            x=ans-a+l[i]*b
            ans=min(ans,x)
    print(ans)
t=int(input())
for _ in range(t):
    solution()