"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for t in range(int(input())):
        
        # This is the main code
        n,m=map(int,input().split())
        l=list(map(int,input().split()))
        # print(l)
        cnt=0
        i=0
        while i<n:
            x=m
            if l[i]==m:
                while i<n and l[i]==x:
                    if x==1:
                        cnt+=1
                        break
                    x-=1
                    i+=1

            else:
                i+=1
        print('Case #'+str(t+1)+': '+str(cnt))

solution()