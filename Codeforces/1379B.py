"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        l,r,m=map(int,input().split())
        if m>=l and m<=r:
            print(m,l,l)
        else:
            lim=r-l
            


solution()