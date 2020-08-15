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
    s=list(input())
    l=[]
    for i in range(n):
        l.append(int(s[i]))
    # for i in range(1,n):
    #     l[i]+=l[i-1]
    l=[0]+l
    j=1
    i=1
    q=0
    ans=0
    while i<n+1 and j<n+1:
        q+=l[i]
        p=i-j+1
        if p==q:
            ans+=1
            i+=1
        elif p>q:
            i+=1
        else:
            while j<=i and p<q
    print(ans+1)

t=int(input())
for _ in range(t):
    solution()