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

        n,m=map(int,input().split())
        x=n*m
        if x%2==0:
            print(x//2)
        else:
            print((x//2)+1)
solution()