"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,a,b=map(int,input().split())
    s='abcdefghijklmnopqrstuvwxyz'
    l=''
    ans=''
    for i in range(b):
        l+=s[i]
    x=len(l)
    for i in range(n):
        ans+=l[i%x]
    print(ans)
for _ in range(int(input())):
    solution()