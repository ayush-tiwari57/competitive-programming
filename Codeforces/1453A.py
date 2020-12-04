"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    ans=0
    for i in range(len(a)):
        for j in range(len(b)):
            if a[i]==b[j]:
                ans+=1
    print(ans)

t=int(input())
for _ in range(t):
    solution()