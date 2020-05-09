"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""

def solution():
    
    # This is the main code
    n,m,k=map(int,input().split())
    a=[]
    for i in range(n):
        l=list(map(int,input().split()))
        a.append(l)
    for i in range(0,n):
        print(m-((i+1)%m))
    print()
for _ in range(int(input())):
    solution()