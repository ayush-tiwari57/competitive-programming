"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
        
    # This is the main code
    l,r,m=map(int,input().split())
    # l,r,m=map(int,input().split())
    d=r-l
    for i in range(l,r+1):
        v=m%i
        if v<=d and m>=i:
            print(i,l+v,l)
            break
        elif v>=i-d:
            print(i,l,l+i-v)
            break
            

for _ in range(int(input())):
    solution()