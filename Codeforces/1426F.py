"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    s=input()
    dp=[0]*3
    l=1
    mod=10**9+7
    for i in range(n):
        if s[i]=='a':
            dp[0]=(dp[0]+l)%mod
        elif s[i]=='b':
            dp[1]=(dp[1]+dp[0])%mod
        elif s[i]=='c':
            dp[2]=(dp[2]+dp[1]%mod)
        else:
            dp[2]=(3*dp[2]+dp[1])%mod
            dp[1]=(3*dp[1]+dp[0])%mod
            dp[0]=(3*dp[0]+l)%mod
            l=(l*3)%mod
    print(dp[2]%mod)    
t=1
for _ in range(t):
    solution()