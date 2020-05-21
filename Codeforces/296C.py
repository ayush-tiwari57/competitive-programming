"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n,m,k=map(int,input().split())
    a=list(map(int,input().split()))
    op=[]
    op_counter=[0]*(1000004)
    dp=[0]*(1000004)
    for _ in range(m):
        l,r,d=map(int,input().split())
        op.append([l,r,d])
    for i in range(k):
        x,y=map(int,input().split())
        op_counter[x-1]+=1
        op_counter[y]-=1
    for i in range(1,len(op_counter)):
        op_counter[i]+=op_counter[i-1]
    for i in range(len(op)):
        l=op[i][0]
        r=op[i][1]
        d=op[i][2]
        dp[l-1]+=(op_counter[i]*d)
        dp[r]-=(op_counter[i]*d)
    for i in range(1,len(dp)):
        dp[i]+=dp[i-1]
    for i in range(n):
        a[i]+=dp[i]
    
    print(*a)
solution()