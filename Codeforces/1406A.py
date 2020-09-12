"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    l=list(map(int,input().split()))
    d={}
    for i in range(n):
        d[l[i]]=d.get(l[i],0)+1
    flag=0
    for i in range(101):
        if d.get(i,0)==0:
            m2=i
            flag=1
            m1=i
            break
        if d.get(i,0)==1:
            m1=i
            break
    if flag==0:
        for i in range(101):
            if d.get(i,0)==0:
                m2=i
                break
    print(m1+m2)
    
t=int(input())
for _ in range(t):
    solution()