

import sys

input = sys.stdin.buffer.readline


import heapq
def solution():
    for _ in range(int(input())):
        n=int(input())
        a=[0]*(n)
        h=[(-n,(0,n-1))]
        i=1
        while i<=n:
            len, (l,r)=heapq.heappop(h)
            mid=(l+r)//2
            a[mid]=i
            heapq.heappush(h,(-(mid-l),(l,mid-1)))
            heapq.heappush(h,(-(r-mid),(mid+1,r)))
            i+=1
        print(*a)

solution()