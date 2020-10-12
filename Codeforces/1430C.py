"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    ans=n
    prev=n
    l=[[n,n-1]]
    for i in range(n-2,0,-1):
        x=prev+i-1
        if x%2!=0:
            x+=1
        l.append([prev,i])
        prev=x//2
        
    print(prev)        
    for i in range(len(l)):
        print(l[i][0],l[i][1])

    
t=int(input())
for _ in range(t):
    solution()