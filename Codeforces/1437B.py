"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
# import sys
# input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n=int(input())
    l=list(input())
    ans0=0
    ans1=0
    i=1
    while i<n:
        if l[i]==l[i-1]:
            if l[i]=='0':
                ans0+=1
            else:
                ans1+=1
        i+=1
    print(max(ans0,ans1))
    
t=int(input())
for _ in range(t):
    solution()