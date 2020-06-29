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
        x,y,n=map(int,input().split())
        if n%x==y:
            print(n)
        else:
            z=n//x
            if n%x<y:
                z-=1
            print(x*z+y)

solution()