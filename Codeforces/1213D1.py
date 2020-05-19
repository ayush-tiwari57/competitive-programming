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
    m=2e9
    for i in range(max(l)+1):
        a=[]
        for j in l:
            x=j
            cnt=0
            while x>i:
                x//=2
                cnt+=1
            if x==i:
                a.append(cnt)
        if len(a)>=k:
            a.sort()
            s=sum(a[0:k])
            m=min(m,s)
        i+=1
    
    print(m)
solution()