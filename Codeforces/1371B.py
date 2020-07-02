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
        n,r=map(int,input().split())
        if n>r:
            print((r*(r+1))//2)
        else:
            x=n-1
            ans=(x*(x+1))//2
            print(ans+1)
solution()