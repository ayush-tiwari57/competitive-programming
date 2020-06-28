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
        ans1=0
        ans2=0
        for i in range(n):
            g,a,b=map(int,input().split())
            x=1/a
            y=1/b
            ans=1/(x+y)
            # print(ans)
            ans1+=(g*ans)/a
            ans2+=(g*ans)/b
        print(ans1,ans2)

solution()