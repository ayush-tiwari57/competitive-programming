"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""

def solution():
    
    # This is the main code
    x,y=map(int,input().split())
    a,b=map(int,input().split())
    if 2*a>b:
        print(a*abs(x-y)+b*min(x,y))
    else:
        print(a*(x+y))

for _ in range(int(input())):
    solution()