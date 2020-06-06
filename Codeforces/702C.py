"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    j=0
    ans=0
    for i in range(n):
        while j+1<m and abs(a[i]-b[j])>=abs(a[i]-b[j+1]):
            j+=1
        ans=max(ans,abs(a[i]-b[j]))
    print(ans)

solution()