"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    cnt=[0]*(4*10**5+2)
    q,x=map(int,input().split())
    i=0
    s=set()
    for _ in range(q):
        n=int(input())
        z=n%x
        cnt[z]+=1
        while cnt[i%x]:
            cnt[i%x]-=1
            i+=1
        print(i)
solution()