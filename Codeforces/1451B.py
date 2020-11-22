"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,q=map(int,input().split())
    s=list(input())
    for i in range(q):
        l,r=map(int,input().split())
        l-=1
        r-=1
        flag=0
        f=0
        for j in range(0,l):
            if s[j]==s[l]:
                flag=1
                break
        for j in range(r+1,n):
            if s[j]==s[r]:
                f=1
                break
        if f==1 or flag==1:
            print('YES')
        else:
            print('NO')
    
t=int(input())
for _ in range(t):
    solution()