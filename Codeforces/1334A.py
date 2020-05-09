"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""

def solution():
    
    # This is the main code
    n=int(input())
    z=0
    q=0
    flag=0
    for i in range(n):
        x,y=map(int,input().split())
        if x<z or x-z< y-q or y<q:
            flag=1
        z=x
        q=y
    if flag==0:
        print('YES')
    else:
        print('NO')
for _ in range(int(input())):
    solution()