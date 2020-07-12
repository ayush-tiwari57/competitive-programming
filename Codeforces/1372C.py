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
        l=list(map(int,input().split()))
        x=n-1
        while l[x]==x+1 and x>=0:
            x-=1
        cnt=0
        if x==-1:
            print(0)
        else:
            y=0
            while l[y]==y+1 and y<n:
                y+=1
            for i in range(y,x+1):
                if l[i]!=i+1:
                    cnt+=1
            # print(x,y,cnt)
            if cnt==x-y+1:
                print(1)
            else:
                print(2)


solution()