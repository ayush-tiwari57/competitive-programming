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
    l=[]
    for i in range(1,n+1):
        l.append(i)
    l.reverse()
    if n%2==0:
        print(*l)
    else:
        x=l[0]
        l[0]=l[n//2]
        l[n//2]=x
        print(*l)
    
t=int(input())
for _ in range(t):
    solution()