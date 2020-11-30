"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    x=int(input())
    l=[0]
    m=0
    i=0
    while m<=10**6:
        m+=i
        i+=1
        l.append(m)
    

t=int(input())
for _ in range(t):
    solution()