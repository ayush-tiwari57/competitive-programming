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
    l=list(map(int,input().split()))
    pre=[0]*(n+1)
    for i in range(1,n): 
        if l[i]<l[i-1]:
            pre[0]-=abs(l[i]-l[i-1])
            pre[i+1]+=abs(l[i]-l[i-1])
    for i in range(1,n+1):
        pre[i]+=pre[i-1]
        l[i-1]+=pre[i]
    if l[0]<0:
        print('NO')
        return
    print('YES')
    
t=int(input())
for _ in range(t):
    solution()