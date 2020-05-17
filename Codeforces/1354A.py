"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        a,b,c,d=map(int,input().split())
        if a<=b:
            print(b)
        else:
            if d>=c:
                print(-1)
            else:
                x=a-b
                z=x//(c-d)
                if x%(c-d)!=0:
                    z+=1
                print(b+c*z)


solution()