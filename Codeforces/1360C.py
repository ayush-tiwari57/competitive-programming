"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        n=int(input())
        l=list(map(int,input().split()))
        l.sort()
        e=0
        o=0
        d=0
        for i in range(n):
            if l[i]%2==0:
                e+=1
            else:
                o+=1
        for i in range(1,n):
            if l[i]-l[i-1]==1:
                d+=1
        if e%2==0 and o%2==0:
            print('YES')
        elif e%2!=0 and o%2!=0 and d>0:
            print('YES')
        else:
            print('NO')

solution()