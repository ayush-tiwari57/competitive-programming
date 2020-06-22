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
        n,b,m=map(int,input().split())
        l=list(map(int,input().split()))
        beg=-1 
        end=-1
        cnt=0
        for i in range(m):
            if l[i]<beg or l[i]>end:
                beg=0 
                end=b-1
                while l[i]<beg or l[i]>end:
                    end+=b
                    beg+=b
                cnt+=1
        print(cnt)


solution()