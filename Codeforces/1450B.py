"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,k=map(int,input().split())
    l=[]
    for i in range(n):
        x,y=map(int,input().split())
        l.append([x,y])
    for i in range(n):
        flag=0
        for j in range(n):
            if abs(l[i][0]-l[j][0])+abs(l[i][1]-l[j][1])>k:
                flag=1
                break
        if flag==0:
            print(1)
            return
    print(-1)

t=int(input())
for _ in range(t):
    solution()