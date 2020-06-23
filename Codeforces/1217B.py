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
        n,x=map(int,input().split())
        d=[]
        l=[]
        for i in range(n):
            a,b=map(int,input().split())
            d.append(a-b)
            l.append(a)
        d.sort(reverse=True)
        l.sort(reverse=True)
        # print(l[0],d[0])
        if l[0]>=x:
            print(1)
        elif d[0]<1:
            print(-1)
        else:
            z=(x-l[0])//d[0]
            if (x-l[0])%d[0]!=0:
                z+=1
            print(z+1)
            

solution()