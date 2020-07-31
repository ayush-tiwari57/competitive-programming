"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    if n<=30:
        print('NO')
    else:
        if n-30==6:
            if n>6+10+15:
                print('YES')
                print(10,6,15,n-(6+10+15))
            else:
                print('NO')
        elif n-30==10:
            if n>6+10+15:
                print('YES')
                print(6,10,15,n-(6+10+15))
            else:
                print('NO')
        elif n-30==14:
            if n>6+10+15:
                print('YES')
                print(6,10,15,n-(6+10+15))
            else:
                print('NO')
        else:
            if n-30>0:
                print('YES')
                print(6,10,14,n-30)
            else:
                print('NO')
t=int(input())
for _ in range(t):
    solution()