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
    x=int(n**0.5)
    l=[0]
    i=1
    while(i<=x):
        a=n//i
        l.append(i)
        l.append(a)
        i+=1
    l=list(set(l))
    l.sort()
    print(len(l))
    print(*l)

for _ in range(int(input())):
    solution()