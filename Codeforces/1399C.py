"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    l=list(map(int,input().split()))
    if n==1:
        print(0)
        return
    mi=l[1]-l[0]
    mx=l[0]
    for i in range(1,n):
        mi=min(mi,l[i]-mx)
        mx=max(mx,l[i])
    if mi<0:
        mi=abs(mi)
        cnt=0
        while mi>0:
            mi=mi//2
            cnt+=1
        print(cnt)
    else:
        print(0)
for _ in range(int(input())):
    solution()
