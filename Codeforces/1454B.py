"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    l=list(map(int,input().split()))
    d={}
    for i in range(n):
        d[l[i]]=d.get(l[i],0)+1
    x=1e9
    for i in d:
        if d[i]==1:
            x=min(x,i)
    if x==1e9:
        print(-1)
    else:
        # print(x)
        for i in range(n):
            if l[i]==x:
                print(i+1)  
t=int(input())
for _ in range(t):
    solution()