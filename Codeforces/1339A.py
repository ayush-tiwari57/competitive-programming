"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    a=[l[n//2]]
    i=1
    while len(a)!=n:
        a.append(l[n//2-i])
        if n//2+i==n:
            break
        a.append(l[n//2+i])
        i+=1
    print(*a)


for _ in range(int(input())):
    solution()