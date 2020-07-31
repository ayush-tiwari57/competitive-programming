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
    x=n//4
    if n%4!=0:
        x+=1
    print('9'*(n-x)+'8'*x)

t=int(input())
for _ in range(t):
    solution()