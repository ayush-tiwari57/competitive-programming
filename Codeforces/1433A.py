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
    x=n%10
    l=0
    while n>0:
        n//=10
        l+=1
    ans=(x-1)*10
    ans+=((l)*(l+1))//2
    print(ans)
t=int(input())
for _ in range(t):
    solution()