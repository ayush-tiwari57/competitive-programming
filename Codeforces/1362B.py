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
        flag=0
        for z in range(1,1025):
            a=[]
            for i in range(n):
               x=l[i]^z
               a.append(x)
            a.sort()
            if a==l:
                print(z)
                flag=1
                break 
        if flag==0:
            print(-1)
solution()