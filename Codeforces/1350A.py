"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,k=map(int,input().split())
    while n%2!=0:
        x=0
        for i in range(2,int(n**0.5)+1):
            if n%i==0:
                x=i
                break
        if x==0:
            x=n
        n+=x
        k-=1
    print(n+(2*k))
for _ in range(int(input())):
    solution()