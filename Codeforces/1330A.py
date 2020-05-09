"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""

def solution():
    
    # This is the main code

    n,x=map(int,input().split())
    l=list(map(int,input().split()))
    cnt=0
    i=1
    z=1
    while(z==1):
        if i not in l:
            x-=1
        i+=1
        if i not in l and x==0:
            z=0
    print(i-1)


for _ in range(int(input())):
    solution()