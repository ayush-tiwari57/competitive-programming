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
        h,c,t=map(int,input().split())
        bb=(h+c)/2
        if t<=bb:
            print(2)
        else:
            k= (h-t)/(2*t-h-c)
            k=int(k)
            if abs((k*(h+c)+h)-t*(2*k+1))*(2*k+3)<=abs(((k+1)*(h+c)+h)-t*(2*k+3))*(2*k+1):
                print(2*k+1)
            else:
                print(2*(k+1)+1)
    
solution()