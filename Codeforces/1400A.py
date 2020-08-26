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
    s=input()
    ans=s[n-1]*(n)
    print(ans)

t=int(input())
for _ in range(t):
    solution()