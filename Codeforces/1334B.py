"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""

def solution():
    
    # This is the main code

    n,m=map(int,input().split())
    l=list(map(int,input().split()))
    l.sort()
    s=sum(l)
    i=0
    while(s/n<m):
        s-=l[i]
        i+=1
        n-=1
        if n==0:
            break
    print(n)
for _ in range(int(input())):
    solution()