"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    n=int(input())
    l=[]
    for i in range(n):
        x=int(input())
        l.append(x)
    l.sort()
    i=0
    j=n//2
    # a=[0]*100003
    ans=n
    for i in range(n//2):
        while j<n:
            if 2*l[i]<=l[j]:
                ans-=1
                j+=1
                break
            else:
                j+=1

    print(ans)



solution()