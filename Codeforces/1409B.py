"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    a,b,x,y,n=map(int,input().split())
    dif1=a-x
    dif2=b-y
    m=min(a,b)
    if a==b:
        if dif1>dif2:
            if dif1>n:
                a-=n
            else:
                a-=dif1
                b-=min(dif2,(n-dif1))
        else:
            if dif2>n:
                b-=n
            else:
                b-=dif2
                a-=(min(dif1,n-dif2))
    else:
        if(a-min(n,dif1)<b-min(dif2,n)):
            if dif1>n:
                a-=n
            else:
                a-=dif1
                b-=min(dif2,(n-dif1))
        else:
            if dif2>n:
                b-=n
            else:
                b-=dif2
                a-=(min(dif1,n-dif2))
    # print(a,b)
    print(a*b)

t=int(input())
for _ in range(t):
    solution()