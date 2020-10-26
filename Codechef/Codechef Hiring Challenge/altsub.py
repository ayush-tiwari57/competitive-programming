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
    a=list(map(int,input().split()))
    s1=0
    s2=0
    for i in range(0,n,2):
        s1+=a[i]
    for i in range(1,n,2):
        s2+=a[i]
    print(max(s1,s2))
    
t=int(input())
for _ in range(t):
    solution()