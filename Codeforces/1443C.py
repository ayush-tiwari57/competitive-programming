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
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    l=[[0,0]]
    for i in range(n):
        l.append([a[i],-b[i]])
    l.sort(reverse=True)
    cnt=0
    i=0
    while i<n:
        if cnt+abs(l[i][1])<l[i][0]:
            cnt+=abs(l[i][1])
        else:
            break
        i+=1
    # print(cnt,i)
    print(max(l[i][0],cnt))
    
t=int(input())
for _ in range(t):
    solution()