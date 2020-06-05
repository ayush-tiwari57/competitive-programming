"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000
    
"""
import sys
input = sys.stdin.buffer.readline
    
def solution():
    a=[1,2,1,3,1,2,1]
    for _ in range(int(input())):
        
        # This is the main code
        n=int(input())
        ans=0
        s=0
        for i in range(61,-1,-1):
            x=n//(2**i)
            x-=s
            s+=x
            ans+=x*(i+1)
        print(ans)
    
    
    
solution()