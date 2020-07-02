"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    n=int(input())
    s=input()
    ans=1
    for i in range(1,n):
        if s[i]!=s[i-1]:
            ans+=1
    print(min(n,ans+2))


solution()