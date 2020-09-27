"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution(c):
    
    # This is the main code
    n,x=map(int,input().split())
    l=list(map(int,input().split()))
    ans=[]
    for i in range(n):
        z=l[i]//x
        if l[i]%x!=0:
            z+=1
        ans.append([z,i+1])
    ans.sort()
    print('Case #'+str(c+1)+':',end=' ')
    for i in range(n):
        print(ans[i][1],end=' ')
    print()
t=int(input())
for c in range(t):
    solution(c)