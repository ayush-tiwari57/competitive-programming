"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk
    
"""
# import sys
# input = sys.stdin.buffer.readline
    
def solution():
    
    # This is the main code
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    s=set(l)
    if len(s)>k:
        print(-1)
        return
    d={}
    
    a=[]
    for i in range(n):
        if d.get(l[i],0)==0:
            a.append(l[i])
            d[l[i]]=1
    j=0
    while len(a)!=k:
        a.append(1)
    j=0
    a=a*n
    print(len(a))
    print(*a)
    
for _ in range(int(input())):
    solution()