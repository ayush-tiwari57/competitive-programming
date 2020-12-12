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
    x=n//3
    if x>0:
        ans='abc'*x
    else:
        ans=''
    if n%3==1:
        ans+='a'
    elif n%3==2:
        ans+='ab'
    print(ans)

t=int(input())
for _ in range(t):
    solution()