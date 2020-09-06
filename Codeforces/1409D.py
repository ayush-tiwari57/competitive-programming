"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,s=map(int,input().split())
    x=n
    l=[]
    while x>0:
        l.append(x%10)
        x//=10
    l.reverse()
    l=[0]+l
    i=len(l)-1
    while sum(l)>s:
        l[i]=0
        i-=1
        l[i]+=1
    p=len(l)-1
    num=0
    for i in range(len(l)):
        num+=l[i]*(10**p)
        p-=1
    print(num-n)
    
        

t=int(input())
for _ in range(t):
    solution()