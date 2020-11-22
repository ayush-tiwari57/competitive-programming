"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,s=map(int,input().split())
    l=list(map(int,input().split()))
    l.sort()
    ans=0
    if l[n//2]==s:
        print(0)
    else:
        if l[n//2-1]<s:
            for i in range(n//2+1,n):
                if(l[i]<s):
                    ans+=abs(l[i]-s)
        else:
            for i in range(n//2):
                if l[i]>s:
                    ans+=abs(l[i]-s)
        ans+=abs(s-l[n//2])
        print(ans)
t=1
for _ in range(t):
    solution()