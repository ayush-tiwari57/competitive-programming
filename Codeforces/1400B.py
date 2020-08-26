"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    p,f=map(int,input().split())
    cnts,cntw=map(int,input().split())
    s,w=map(int,input().split())
    num1=0
    num2=0
    ans=0
    for i in range(cnts+1):
        num1=i
        if i*s>p:
            continue
        x=p-i*s
        num2=min(cntw,x//w)
        x=num2*w
        num1x=min(f//s,cnts-num1)
        num2x=num1x*s
        num1y=min(f//w,cntw-num2)
        num2y=num1y*w
        num1yy=min((f-num2y)//s,cnts-num1)

        # print(num1)
        num1xx=min((f-num2x)//w,cntw-num2)
        z=max(num1x+num1xx,num1y+num1yy)
        ans=max(ans,num1+num2+z)
    print(ans)

t=int(input())
for _ in range(t):
    solution()