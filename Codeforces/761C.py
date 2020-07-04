"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    n,m=map(int,input().split())
    num=[100000]*100
    char=[100000]*100
    special=[100000]*100
    for i in range(n):
        s=input()
        for j in range(m):
            if s[j]>='0' and s[j]<='9':
                num[i]=min(num[i],min(j,m-j))
            if s[j]>='a' and s[j]<='z':
                char[i]=min(char[i],min(j,m-j))
            if s[j]=='*' or s[j]=='#' or s[j]=='&':
                special[i]=min(special[i],min(j,m-j))
    ans=100000
    for i in range(n):
        for j in range(n):
            for k in range(n):
                if i==k or j==k or i==j:
                   continue
                ans=min(ans,num[i]+char[j]+special[k])
    print(ans) 

solution()