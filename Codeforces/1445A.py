"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution(test):
    if test>0:
        x=input()
    
    # This is the main code
    n,x=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a.sort()
    b.sort(reverse=True)
    for i in range(n):
        if a[i]+b[i]>x:
            print("NO")
            return
    print("YES")
    
t=int(input())
for _ in range(t):
    solution(_)