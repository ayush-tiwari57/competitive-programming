"""
Code of Ayush Tiwari
Codeforces: servermonk
Codechef: ayush572000

"""
import sys
input = sys.stdin.buffer.readline

def solution():
    
    # This is the main code
    n,x,y=map(int,input().split())
    if n==2:
        print(x,y)
    else:
        l=[]
        d=y-x
        flag=0
        for i in range(1,d+1):
            if d%i==0:
                if (d//i)-1>n-2:
                    continue
                else:
                    # print(i)
                    z=i
                    for q in range(x,y+1,z):
                        l.append(q)
                    flag=1
                    break
        # print(l[-1])
        if flag:
            l1=[]
            q=x-z
            while q>0 and len(l1)+len(l)!=n:
                l1.append(q)
                q-=z
            if len(l1)>0:
                l=l1+l 
            while len(l)!=n:
                a=l[-1]+z
                # print(a)
                l.append(a)
        else:
            z=y-x
            q=x
            while q>0 and len(l)!=n-1:
                l.append(q)
                q-=z
            l.reverse()
            while len(l)!=n:
                q=l[-1]+z
                l.append(q)
        print(*l)

t=int(input())
for _ in range(t):
    solution()  