"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,k=map(int,input().split())
    s=list(input())
    z=0
    o=0
    q=0
    for i in range(k):
        if s[i]=='0':
            z+=1
        elif s[i]=='1':
            o+=1
        else:
            q+=1
    flag=0
    if abs(z-o)<=q:
        zm=z%2
        om=o%2
        qm=q%2
        if zm==om:
            if qm==1:
                flag=1
        else:
            if qm==0:
                flag=1
    else:
        flag=1        
    if flag:
        print('NO')
    else:
        j=0
        for i in range(1,n-k+1):
            if s[j]=='0':
                z-=1
            elif s[j]=='1':
                o-=1
            j+=1
            if l[i]=='?':

t=int(input())
for _ in range(t):
    solution()