"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline
import math
def solution():
    l,r,x,y=map(int,input().split())
    if y%x!=0:
        print(0)
        return
    p=y//x
    cnt=0
    for i in range(1,int(p**0.5)+1):
        if p%i==0:
            a=i
            b=p//i
            if a*x>=l and b*x>=l and a*x<=r and b*x<=r:
                if math.gcd(a,b)==1:
                    if a==b:
                        cnt+=1
                    else:
                        cnt+=2
            
    print(cnt)


solution()