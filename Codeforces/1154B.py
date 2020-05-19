"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk
    
"""
import sys
input = sys.stdin.buffer.readline
    
def solution():
    n=int(input())
    l=list(map(int,input().split()))
    s=list(set(l))
    s.sort()
    if len(s)==1:
        print(0)
    elif len(s)==3:
        if s[2]-s[1]==s[1]-s[0]:
            print(s[2]-s[1])
        else:
            print(-1)
    elif len(s)==2:
        if (s[1]+s[0])%2==0:
            print((s[1]+s[0])//2-s[0])
        else:
            print(s[1]-s[0])
    else:
        print(-1)
solution()