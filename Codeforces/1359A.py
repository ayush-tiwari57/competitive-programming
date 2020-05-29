"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        z=0
        # This is the main code
        n,m,k = map(int,input().split())
        dis = n//k
        first = min(dis,m)
        m1 = m-first
        others = k-1
    
        second = (m1//others)
    
        if(m1%others!=0):
            second+=1
    
        ans = first-second
    
        print(ans)


solution()