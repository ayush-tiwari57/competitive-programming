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
    ans=1e10+3
    for i in range(1,10**5):
        x=(n//i+-1)+i-1
        if n%i!=0:
            x+=1
        ans=min(ans,x)
    print(ans)

t=int(input())
for _ in range(t):
    solution()