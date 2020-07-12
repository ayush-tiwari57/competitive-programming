"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for t in range(int(input())):
        
        # This is the main code
        n=int(input())
        l=list(map(int,input().split()))
        m=-1
        ans=0
        for i in range(n):
            if l[i]>m:
                if i!=n-1:
                    if l[i]>l[i+1]:
                        ans+=1
                else:
                    ans+=1
                m=l[i]
        print('Case #'+str(t+1)+':',ans)


solution()