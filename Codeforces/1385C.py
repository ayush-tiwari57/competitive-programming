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
        a=list(map(int,input().split()))
        ans=0
        inc=0
        dec=0
        i=n-1
        j=n-1
        k=0
        x=0
        for i in range(n-1,0,-1):
            flag=0
            if a[i]<=a[i-1]:
                j=i-1
                continue
            else:
                break
        for i in range(j,0,-1):
            if a[i]>=a[i-1]:
                k=i-1
                continue
            else:
                break
        print(k)
                    
        # print(ans)
solution()  