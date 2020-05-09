"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""


def solution():
    
    # This is the main code
    n=int(input())
    l=list(map(int,input().split()))
    i=0
    j=0
    ans=0
    
    while i<n and j<n:
        mi=-2e9
        mx=-2e9
        if j<n:
            if l[j]<0:
                while i<n:
                    if l[i]<0:
                        mi=max(mi,l[i])
                        i+=1
                    else:
                        break
                j=i
                ans+=mi
        if j<n:
            if l[j]>0:
                while i<n:
                    if l[i]>0:
                        mx=max(mx,l[i])
                        i+=1
                    else:
                        break
                j=i
                ans+=mx
    print(ans)


for _ in range(int(input())):
    solution()