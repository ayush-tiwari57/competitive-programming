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
    l=list(map(int,input().split()))
    d={}
    for i in range(n):
        cnt=0
        while l[i]>0:
            d[cnt]=d.get(cnt,0)+l[i]%k
            l[i]//=k
            cnt+=1
    for i in d:
        if d[i]>1:
            print('NO')
            return
    print('YES')
    
t=int(input())
for _ in range(t):
    solution()