"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
#import sys
#input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    l=list(input())
    flag=0
    if l[0]=='2':
        if l[n-3]=='0' and l[n-2]=='2' and l[n-1]=='0':
            flag=1
        if l[1]=='0' and l[n-2]=='2' and l[n-1]=='0':
            flag=1
        if l[1]=='0' and l[2]=='2' and l[n-1]=='0':
            flag=1
        if l[1]=='0' and l[2]=='2' and l[3]=='0':
            flag=1
    else:
        if l[n-4]=='2' and l[n-3]=='0' and l[n-2]=='2' and l[n-1]=='0':
            flag=1
    if flag==1:
        print('YES')
    else:
        print('NO')
t=int(input())
for _ in range(t):
    solution()