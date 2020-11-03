"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
import math
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    cnt=0
    l=[]
    for i in range(4*n,-1,-1):
        if len(l)==n:
            break
        flag=0
        for x in l:
            if i%x==0 or math.gcd(x,i)==1:
                flag=1
                break
        if flag==0:
            l.append(i)
    print(*l)    
t=int(input())
for _ in range(t):
    solution()