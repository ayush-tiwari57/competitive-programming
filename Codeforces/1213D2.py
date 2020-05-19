"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    l.sort()
    val=[0]*1000001
    op=[0]*1000001
    m=2e9
    for i in range(n):
        val[l[i]]+=1
    for i in range(n):
        cnt=0
        x=l[i]
        while x>0:
            if val[x]>=k:
                m=min(m,op[x])
            cnt+=1
            x//=2
            op[x]+=cnt
            val[x]+=1
            
    print(m)
solution()