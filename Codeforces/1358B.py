"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    for _ in range(int(input())):
        
        # This is the main code
        n=int(input())
        l=list(map(int,input().split()))
        l.sort()
        i=0
        j=0
        ans=1
        while i<n:
            # print(i-j+1)
            if ans+i-j>=l[i]:
                ans+=i-j+1
                j=i+1
            i+=1
        print(ans)


solution()