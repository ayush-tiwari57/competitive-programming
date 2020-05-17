"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk
    
"""
import sys
import heapq
input = sys.stdin.buffer.readline
from collections import Counter
def solution():
        
    # This is the main code
    n,q=map(int,input().split())
    l=list(map(int,input().split()))
    ql=list(map(int,input().split()))
    for i in range(q):
        if ql[i]>0:
            heapq.heappush(l,ql[i])
        else:
            del l[abs(ql[i])-1]
    if l==[]:
        print(0)
    else:
        for i in l:
            print(i)
            break         
    
solution()