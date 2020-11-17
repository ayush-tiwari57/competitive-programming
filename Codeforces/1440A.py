"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,c0,c1,h=map(int,input().split())
    s=list(input())
    cnt1=0
    cnt0=0
    for i in range(n):
        if s[i]=='0':
            cnt0+=1
        else:
            cnt1+=1
    # print(cnt1,cnt0)
    ans=cnt1*c1+cnt0*c0
    for i in range(0,cnt0+1):
        x=(cnt0-i)*c0+(cnt1+i)*c1+h*i
        ans=min(ans,x)
    for i in range(0,cnt1+1):
        x=(cnt0+i)*c0+(cnt1-i)*c1+h*i
        # print(x)
        ans=min(ans,x)
    print(ans)

t=int(input())
for _ in range(t):
    solution()