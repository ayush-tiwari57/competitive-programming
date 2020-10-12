"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    l.sort(reverse=True)
    s=0
    for i in range(k+1):
        s+=l[i]
    print(s)
t=int(input())
for _ in range(t):
    solution()