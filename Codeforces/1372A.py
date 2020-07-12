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
        n=int(input())
        x=999
        l=[]
        while n>0:
            l.append(x)
            n-=1
        print(*l)


solution()