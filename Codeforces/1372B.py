"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
import math
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        n=int(input())
        l=[]
        for i in range(1,int(n**0.5)+1):
            if n%i==0:
                if n//i==i:
                    l.append(i)
                else:
                    l.append(i)
                    l.append(n//i)
        m=2e9
        for i in range(len(l)):
            x=l[i]
            y=n-l[i]
            if  x>0 and y>0 and(x*y)//math.gcd(x,y)<m:
                ans1=x
                ans2=y
                m=(x*y)//math.gcd(x,y)
        print(ans1,ans2)
solution()