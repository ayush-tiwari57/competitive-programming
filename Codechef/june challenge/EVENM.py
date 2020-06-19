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
        cnt=0
        for i in range(n):
            a=[]
            for j in range(n):
                cnt+=1
                a.append(cnt)
            if i%2!=0:
                a.reverse()
            print(*a)


solution()