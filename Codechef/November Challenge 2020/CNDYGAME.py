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
    l=list(map(int,input().split()))
    l=[0]+l
    dp=[0]*(n+5)
    arr=[0]*(n+5)
    mod=10**9+7
    if 1 not in l:
        for i in range(1,n+1):
            if i==n:
                if l[i]&1==1:
                    dp[i]+=l[i]+dp[i-1]
                else:
                    arr[i]=1
                    dp[i]+=l[i]-1+dp[i-1]
            else:
                if l[i]&1==1:
                    arr[i]=1
                    dp[i]+=l[i]-1+dp[i-1]
                else:
                    dp[i]+=dp[i-1]+l[i]
    else:
        if l[1]==1:
            dp=[1]*(n+5)
            dp[0]=0
        elif l[n]==1:
            for i in range(1,n+1):
                if i==n:
                    dp[i]+=1+dp[i-1]
                else:
                    if l[i]&1==1:
                        arr[i]=1
                        dp[i]+=l[i]-1+dp[i-1]
                    else:
                        dp[i]+=l[i]+dp[i-1]
        else:
            for i in range(1,n+1):
                if i+1<=n and l[i+1]==1:
                    if l[i]&1==1:
                        arr[i]=0
                        dp[i]+=l[i]+ dp[i-1]
                    else:
                        arr[i]=1
                        arr[i+1]=2
                        dp[i]+=l[i]-1+dp[i-1]
                elif l[i]!=1:
                    if i==n:
                        if l[i]&1==1:
                            dp[i]+=l[i]+dp[i-1]
                        else:
                            arr[i]=1
                            dp[i]+=l[i]-1+dp[i-1]
                    else:
                        if l[i]&1==1:
                            arr[i]=1
                            dp[i]+=dp[i-1]+l[i]-1
                        else:
                            dp[i]+=l[i]+dp[i-1]
                else:
                    dp[i]+=dp[i-1]
    q=int(input())
    for i in range(1,n+1):
        dp[i]+=arr[i]
    for i in range(q):
        p=int(input())
        x=p//n
        y=p%n
        if p%n==0:
            x-=1
            y=n
        if l[n]==1:
            print((dp[n]*x+dp[y])%mod)
        elif l[1]==1:
            if y==1 and x!=0:
                print(((dp[n]*x+dp[y])%mod)-1)
            else:
                print((dp[n]*x+dp[y])%mod)
        else:
            if l[n]&1==1:
                print((x*dp[n]+dp[y])%mod)
            else:
                print((x*(dp[n]-1)+dp[y])%mod)
t=int(input())
for _ in range(t):
    solution()