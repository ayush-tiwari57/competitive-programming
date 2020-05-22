"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n=int(input())
    l=list(map(int,input().split()))
    l=[abs(x) for x in l]
    l.sort()
    i=0
    j=0
    ans=0
    while i<n:
        while 2*l[j]<l[i]: j+=1
        ans+=i-j
        i+=1
    print(ans)
solution()