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
        x,y,z=map(int,input().split())
        cnt=0
        m=max(x,y,z)
        if x==m:
            cnt+=1
        if y==m:
            cnt+=1
        if z==m:
            cnt+=1
        if cnt>=2:
            print('YES')
            print(m,min(x,y,z),1)
        else:
            print('NO')
solution()