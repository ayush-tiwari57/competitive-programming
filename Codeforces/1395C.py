"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,m=map(int,input().split())
    ln=list(map(int,input().split()))
    lm=list(map(int,input().split()))
    for s in range(512):
        cnt=0
        for i in range(n):
            for j in range(m):
                if (ln[i]&lm[j])|s==s:
                    cnt+=1
                    break 
        if(cnt==n):
            break 
    print(s) 
t=1
for _ in range(t):
    solution()