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
    d=[0]*(n+1)
    for i in range(n-1):
        if i%2==0:
            d[i+1]=d[i]+abs(l[i]-l[i+1])
        else:
            d[i+1]=d[i]-abs(l[i]-l[i+1])
    d.sort()
    # print(d)
    print(d[n]-d[0])

solution()