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
    a1=[]
    b1=[]
    d1={}
    d2={}
    s1=0
    s2=0
    for i in range(n):
        d1[a[i]]=d1.get(a[i],0)+1
        d2[b[i]]=d2.get(b[i],0)+1
    for i in d1:
        if d1[i]%2!=d2.get(i,0)%2:
            print(-1)
            return
        x=abs((d1[i]-d2.get(i,0)))//2
        if x==0:
            continue
        elif d1[i]>d2.get(i,0):
            b1.append([i,x])
            s2+=x
        else:
            a1.append([i,x])
            s1+=x
    for i in d2:
        if d2[i]%2!=d1.get(i,0)%2:
            print(-1)
            return
        x=abs((d2[i]-d1.get(i,0)))//2
        if d2[i]==d1.get(i,0):
            continue
        elif d2[i]>d1.get(i,0):
            a1.append([i,x])
            s1+=x
        else:
            b1.append([i,x])
            s2+=x
    a1.sort()
    b1.sort()
    print(a1)
    print(b1)
    if s1!=s2:
        print(-1)
        return
    m=min(min(a),min(b))
    if m==a1[0][0] or m==b1[0][0]:
        ans=2*s1*m-1
    else:
        ans=2*s1*m
    
    print(ans)
    

for _ in range(int(input())):
    solution()