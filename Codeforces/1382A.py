"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
        
    # This is the main code
    d={}
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    for i in range(n):
        d[a[i]]=1
    for i in range(m):
        if(d.get(b[i],)==1):
            print('YES')
            print(1,b[i])
            return
    print('NO')
for _ in range(int(input())):
    solution()