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
    ans=0
    for s in range(101):
        flag=[0]*51
        cnt=0
        for i in range(n):
            if(flag[i]==0):
                for j in range(i+1,n):
                    if l[i]+l[j]==s:
                        if flag[j]==0:
                            cnt+=1
                            flag[j]=1
                            break
        # print(s,cnt)
        ans=max(cnt,ans)
    print(ans)                

t=int(input())
for _ in range(t):
    solution()