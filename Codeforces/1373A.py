"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
        
    # This is the main code
    a,b,c=map(int,input().split())
    z=a*b
    if c<a:
        print(-1,1)
        return
    if c==a:
        print(-1,2)
        return
    if z<=c:
        print(1,-1)
        return
    print(1,b)
for _ in range(int(input())):
    solution()