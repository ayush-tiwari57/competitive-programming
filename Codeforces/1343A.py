"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    k=2
    while n%((2**k)-1)!=0:
        k+=1
    x=n/((2**k)-1)
    print(int(x))
for _ in range(int(input())):
    solution()