"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        n,k = map(int,input().split())
        l = list(map(int,input().split()))
        sum_frnt,sum_back=0,0
        maxim=-1
        for i in range(n):
            sum_frnt+=l[i]
            sum_back+=l[n-1-i]
            if sum_frnt%k!=0 or sum_back%k!=0:
                maxim= i+1
        print(maxim)
solution()