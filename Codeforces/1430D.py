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
    s=input()
    l=[]
    i=0
    while i<n:
        j=i
        while i<n and s[i]==s[j]:
            i+=1
        l.append(i-j)
    d=0
    pos=[]
    for i in range(len(l)):
        d+=l[i]-1
        if l[i]-1>0:
            pos.append(i)
    pos.reverse()
    ans=0
    i=0
    x=len(l)
    while i<x:
        if(pos):
            ans+=1
            if l[i]-1>0:
                pos.pop()
            else:
                y=pos.pop()
                l[y]-=1
                if l[y]-1>0:
                    pos.append(y)
        else:
            ans+=(x-i)//2+(x-i)%2
            break
        i+=1

    print(ans)

    
t=int(input())
for _ in range(t):
    solution()