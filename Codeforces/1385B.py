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
        d={}
        a=[]
        for i in range(len(l)):
            if d.get(l[i],0)==0:
                a.append(l[i])
                d[l[i]]=1
        print(*a)
solution()