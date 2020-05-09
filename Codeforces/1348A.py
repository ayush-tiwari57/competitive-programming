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
    s1=s2=0
    for i in range(1,(n//2)):
        s1+=2**i
    s1+=2**n
    s=2*(2**n-1)
    s2=s-s1
    print(abs(s1-s2))


for _ in range(int(input())):
    solution()