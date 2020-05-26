"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        n=int(input())
        l=list(map(int,input().split()))
        l.sort()
        m=2e9
        for i in range(1,n):
            m=min(m,(l[i]-l[i-1]))
        print(m)
solution()