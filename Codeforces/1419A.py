"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    s=input()
    if n%2==0:
        flag=0  
        for i in range(1,n,2):
            if int(s[i])%2==0:
                flag=1
                break
        if flag:
            print('2')
        else:
            print('1')
    else:
        flag=0
        for i in range(0,n,2):
            if int(s[i])%2==1:
                flag=1
                break
        if flag==1:
            print(1)
        else:
            print(2)

t=int(input())
for _ in range(t):
    solution()