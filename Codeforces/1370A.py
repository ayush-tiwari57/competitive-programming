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
        i=1
        m=1
        while i<=n:
            z=n//i
            if z>1:
                m=max(m,i)
            i+=1
        print(m)

solution()