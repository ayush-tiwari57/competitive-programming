"""
Code of Ayush Tiwari
Codechef: ayush572000
Codeforces: servermonk

"""

def solution():
    
    # This is the main code
    n=int(input())
    x=[0]*n
    l=list(map(int,input().split()))
    for i in range(1,n):
        x[i]=abs(l[i]-l[i-1])
    cnt=0
    a=[]
    for i in range(1,n):
        if x[i]<=2:
            cnt+=1
        else:
            a.append(cnt)
            cnt=0
    a.append(cnt)
    print(min(a)+1,max(a)+1)
for _ in range(int(input())):
    solution()