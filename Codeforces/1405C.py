"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,k=map(int,input().split())
    s=list(input())
    a=['?']*k
    flag=0
    for i in range(n):
        if s[i]=='1' and a[i%k]=='0':
            flag=1
            break
        elif s[i]=='0' and a[i%k]=='1':
            flag=1
            break 
        else:
            if s[i]!='?':
                a[i%k]=s[i]
    if flag:
        print('NO')
    else:
        if a.count('1')>k//2 or a.count('0')>k//2:
            print('NO')
        else:
            print('YES')

t=int(input())
for _ in range(t):
    solution()