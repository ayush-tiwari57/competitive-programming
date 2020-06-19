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
        n=int(input())
        l=list(map(int,input().split()))
        flag=0
        f=0
        t=0
        for i in range(n):
            if l[i]==5:
                f+=1
            elif l[i]==10:
                if f==0:
                    flag=1
                else:
                    f-=1
                    t+=1
            else:
                if t>0:
                    t-=1
                elif f>1:
                    f-=2
                else:
                    flag=1
            if flag==1:
                break
        if flag==0:
            print('YES')
        else:
            print('NO')


solution()