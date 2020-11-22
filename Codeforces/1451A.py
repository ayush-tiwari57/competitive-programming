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
    if n==1:
        print(0)
    elif n==2:
        print(1)
    elif n==3:
        print(2)
    elif n%2==0:
        print(2)
    else:
        print(3)
t=int(input())
for _ in range(t):
    solution()