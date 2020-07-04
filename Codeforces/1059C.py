"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n=int(input())
    x=1
    while n>0:
        if n!=3:
            z=n//2+n%2
            print((str(x)+' ')*z,end='')
            n-=z
            x*=2
        else:
            print(x,x,x*3)
            n=0
solution()