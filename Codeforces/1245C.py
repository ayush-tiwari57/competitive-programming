"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""

def solution():
    s=input()
    n=len(s)
    m=10**9+7
    dp=[1]*(n+1)
    if 'm' in s:
        print(0)
    elif 'w' in s:
        print(0)
    else:
        for i in range(1,n):
            if (s[i]=='u' and s[i-1]=='u') or (s[i]=='n' and s[i-1]=='n'):
                dp[i+1]=(dp[i]+dp[i-1])%m
            else:
                dp[i+1]=dp[i]%m
        print(dp[-1])

solution()