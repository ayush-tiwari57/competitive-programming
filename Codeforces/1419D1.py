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
    l.sort()
    a=[]
    if (n-2)%2==0:
        print((n-2)//2)
    else:
        print((n-2)//2+1)
    i=0
    j=n-1
    flag=0
    while i<=j:
        if flag==0:
            flag=1
            a.append(l[j])
            j-=1
        else:
            flag=0
            a.append(l[i])
            i+=1
    print(*a)
t=1
for _ in range(t):
    solution()