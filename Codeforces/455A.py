"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    cnt=[0]*(10**5+1)
    ans=[0]*(10**5+1)
    n=int(input())
    l=list(map(int,input().split()))
    for i in range(n):
        cnt[l[i]]+=1
    ans[1]=cnt[1]
    for i in range(2,100001):
        ans[i]=max(ans[i-1],ans[i-2]+i*cnt[i])
    print(ans[-1])



solution()