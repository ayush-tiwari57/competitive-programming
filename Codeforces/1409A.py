"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    a,b=map(int,input().split())
    x=abs(a-b)
    ans=0
    ans+=x//10
    if x%10:
        ans+=1
    print(ans)
t=int(input())
for _ in range(t):
    solution()