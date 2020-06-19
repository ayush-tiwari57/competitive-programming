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
        a,b,n=map(int,input().split())
        cnt=0
        while a<=n  and b<=n:
            if a<b:
                a+=b
            else:
                b+=a
            cnt+=1
        print(cnt)
solution()