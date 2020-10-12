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
    for i in range(201):
        for j in range(201):
            x=n-j*7-i*5
            if x>=0 and x%3==0:
                print(x//3,i,j)
                return
    print(-1)
t=int(input())
for _ in range(t):
    solution()