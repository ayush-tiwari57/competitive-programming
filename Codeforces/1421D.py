"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    x,y=map(int,input().split())
    c=list(map(int,input().split()))
    
    path1=abs(x)*c[0 if x>=0 else 3]+abs(y-x)*c[1 if y-x>=0 else 4]
    path2=abs(y)*c[0 if y>=0 else 3]+abs(x-y)*c[5 if x-y>=0 else 2]
    path3=abs(y)*c[1 if y>=0 else 4]+abs(x)*c[5 if x>=0 else 2]
    
    print(min(path1,path2,path3))
    
t=int(input())
for _ in range(t):
    solution()