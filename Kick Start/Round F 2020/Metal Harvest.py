"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution(c):
    
    # This is the main code
    n,k=map(int,input().split())
    arr=[]
    for i in range(n):
        s,e=map(int,input().split())
        arr.append([s,e])
    arr.sort()
    ans=0
    last=0
    for i in range(n):
        arr[i][0]=max(arr[i][0],last)
        if arr[i][0]<arr[i][1]:
            x=(arr[i][1]-arr[i][0]+k-1)//k
            ans+=x
            last=arr[i][0]+x*k
    print('Case #'+str(c+1)+':',ans)
t=int(input())
for c in range(t):
    solution(c)