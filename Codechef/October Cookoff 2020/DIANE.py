"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    d=int(input())
    if d==0:
        print(2)
        print(1,1)
    else:
        l=[]
        while d>33333:
            l.append(66666)
            l.append(99999)
            l.append(1)
            d-=33333
        if d>0:
            l.append(2*d)
            l.append(3*d)
        print(len(l))
        print(*l)

t=int(input())
for _ in range(t):
    solution()