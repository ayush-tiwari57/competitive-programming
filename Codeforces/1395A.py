"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    r,g,b,w=map(int,input().split())
    cnt=0
    m=min(r,g,b)
    if r!=0 and g!=0 and b!=0:
        r1=r-1
        g1=g-1
        b1=b-1
        w1=w+3
        if(r1%2==0): 
            cnt+=1
        if(g1%2==0): 
            cnt+=1
        if(b1%2==0): 
            cnt+=1
        if(w1%2==0): 
            cnt+=1
        
    cnt1=0
    if(r%2==0): 
        cnt1+=1
    if(g%2==0): 
        cnt1+=1
    if(b%2==0): 
        cnt1+=1
    if(w%2==0): 
        cnt1+=1
    s=r+g+b+w
    if cnt1>=3 or cnt>=4 or cnt>=3:
        print('YES')
    elif s==r or s==g or s==b:
        print('YES')
    else:
        print('NO')


t=int(input())
for _ in range(t):
    solution()