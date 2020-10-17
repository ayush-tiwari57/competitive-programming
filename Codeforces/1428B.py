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
    s=list(input())
    if '>' in s and '<' in s:
        d={}
        for i in range(n):
            if s[i]=='-':
                d[i]=1
                d[(i+1)%n]=1
        print(len(d))
    else:
        print(n)
    
t=int(input())
for _ in range(t):
    solution()