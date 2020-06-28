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
        s,n=map(int,input().split())
        x=s//n
        if s==1:
            print(1)
        elif s<n:
            if s%2==0:
                print(1)
            else:
                print(2)
        else:
            if s%n==0:
                print(x)
            elif s%2==0:
                print(x+1)
            else:
                if s-x*n==1:
                    print(x+1)
                else:
                    print(x+2)

solution()