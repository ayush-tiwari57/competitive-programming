"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n=int(input())
    A=list(map(int,input().split()))
    B=list(map(int,input().split()))
    for i in range(n):
        A[i]*=(i+1)*(n-i)
    A.sort()
    B.sort()
    B.reverse()
    S=sum(A[i]*B[i] for i in range(n))
    print(S%998244353)


solution()