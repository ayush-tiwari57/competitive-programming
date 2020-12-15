"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
#import sys
#input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    l=list(map(int,input().split()))
    ans=[]
    i=0
    j=n-1
    while i<=j:
        ans.append(l[i])
        i+=1
        if i<=j:
            ans.append(l[j])
        j-=1
    print(*ans)
t=int(input())
for _ in range(t):
    solution()