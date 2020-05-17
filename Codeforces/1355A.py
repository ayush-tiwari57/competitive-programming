"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        n,k=map(int,input().split())
        a=[n]
        while '0' not in str(n):
            l=[int(x) for x in list(str(n))]
            ma=max(l)
            mi=min(l)
            n=n+ma*mi
            a.append(n)
        # print(a)
        if k>len(a)-1:
            print(a[len(a)-1])
        else:
            print(a[k-1])

solution()