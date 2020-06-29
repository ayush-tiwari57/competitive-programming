"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    a=[]
    b=[]
    c=[]
    n,k=map(int,input().split())
    for i in range(n):
        t,x,y=map(int,input().split())
        if x==1 and y==1:
            c.append(t)
        elif x==1:
            a.append(t)
        elif y==1:
            b.append(t)
    a.sort()
    b.sort()
    c.sort()
    ans=0
    if len(a)+len(c)<k or len(b)+len(c)<k:
        print(-1)
    else:
        z=0
        i=0
        j=0
        while k>0:
            if i<len(c) and j<min(len(a),len(b)):
                if a[j]+b[j]<=c[i]:
                    ans+=a[j]+b[j]
                    j+=1
                else:
                    ans+=c[i]
                    i+=1
            elif i<len(c):
                ans+=c[i]
                i+=1
            else:
                ans+=a[j]+b[j]
                j+=1
            
            k-=1
        
        print(ans)
        
                

solution()